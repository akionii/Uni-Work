import pygame
import sys
import itertools

pygame.init()

WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Brick Breaker")

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
BLUE = (0, 0, 255)

# Colores de los ladrillos
BRICK_COLORS = [
    (0, 255, 0),    # Verde
    (255, 255, 0),  # Amarillo
    (255, 165, 0),  # Naranja
    (255, 0, 0),    # Rojo
    (255, 192, 203),# Rosa
    (0, 255, 255),  # Cian
    (0, 0, 255),    # Azul
    (128, 0, 128)   # Morado
]

PADDLE_WIDTH, PADDLE_HEIGHT = 10000, 10
BALL_SIZE = 15
BRICK_WIDTH, BRICK_HEIGHT = 60, 20
BRICKS_ROWS, BRICKS_COLS = 5, 10

paddle = pygame.Rect(WIDTH // 2 - PADDLE_WIDTH // 2, HEIGHT - 30, PADDLE_WIDTH, PADDLE_HEIGHT)

ball = pygame.Rect(WIDTH // 2, HEIGHT // 2, BALL_SIZE, BALL_SIZE)
ball_dx, ball_dy = 5, -5  # Velocidad inicial de la pelota

def create_bricks():
    bricks = []
    for r in range(BRICKS_ROWS):
        for c in range((WIDTH - 35) // (BRICK_WIDTH + 10)):
            bricks.append((pygame.Rect(c * (BRICK_WIDTH + 10) + 35, r * (BRICK_HEIGHT + 10) + 35, BRICK_WIDTH, BRICK_HEIGHT), itertools.cycle(BRICK_COLORS)))
    return bricks

bricks = create_bricks()

def resize_window(increment):
    global WIDTH, HEIGHT, screen, paddle, ball, bricks

    WIDTH += increment
    HEIGHT += increment

    screen = pygame.display.set_mode((WIDTH, HEIGHT), pygame.RESIZABLE)

    paddle.centerx = WIDTH // 2
    paddle.bottom = HEIGHT - 30
    ball.center = (WIDTH // 2, HEIGHT // 2)

    bricks = create_bricks()

def game_loop():
    global ball_dx, ball_dy

    clock = pygame.time.Clock()
    color_change_event = pygame.USEREVENT + 1
    pygame.time.set_timer(color_change_event, 2000) 

    jugando = True
    while jugando:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                jugando = False
            elif event.type == color_change_event:
                for i in range(len(bricks)):
                    rect, color_cycle = bricks[i]
                    next_color = next(color_cycle)
                    bricks[i] = (rect, color_cycle)

        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT] and paddle.left > 0:
            paddle.move_ip(-20, 0)
        if keys[pygame.K_RIGHT] and paddle.right < WIDTH:
            paddle.move_ip(20, 0)
        if keys[pygame.K_UP]:
            resize_window(5) 

        ball.move_ip(ball_dx, ball_dy)

        if ball.left <= 0 or ball.right >= WIDTH:
            ball_dx = -ball_dx
        if ball.top <= 0:
            ball_dy = -ball_dy
        if ball.bottom >= HEIGHT:
            jugando = False 
        if ball.colliderect(paddle):
            ball_dy = -ball_dy

        for brick in bricks[:]:
            rect, color_cycle = brick
            if ball.colliderect(rect):
                bricks.remove(brick)
                ball_dy = -ball_dy
                #aumentacion cada vez que rompe un bloque
                ball_dx += 3
                ball_dy += 3
                break

        screen.fill(BLACK)
        pygame.draw.rect(screen, BLUE, paddle)
        pygame.draw.ellipse(screen, WHITE, ball)
        for brick in bricks:
            rect, color_cycle = brick
            current_color = next(color_cycle)
            pygame.draw.rect(screen, current_color, rect)

        pygame.display.flip()
        clock.tick(60)
    pygame.quit()
    sys.exit()

if __name__ == "__main__":
    game_loop() 
