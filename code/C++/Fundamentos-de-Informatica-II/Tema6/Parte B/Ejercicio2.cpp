#include<iostream>

using namespace std;

class Vector2D {
    public:
        float x;
        float y;
    
        Vector2D() : x(0), y(0) {}
        Vector2D(float valorX, float valorY) : x(valorX), y(valorY) {}
    
        Vector2D operator+(const Vector2D& v) const {
            return Vector2D(x + v.x, y + v.y);
        }
    
        Vector2D operator/(int divisor) const {
            if (divisor != 0) {
                return Vector2D(x / divisor, y / divisor);
            } else {
                cerr << "Error: División por cero\n";
                return *this;
            }
        }
};

Vector2D calcularMedia(Vector2D arr[], int size) {
    Vector2D suma;
    
    for (int i = 0; i < size; ++i) {
        suma = suma+arr[i];
    }

    return suma/size;
}

int main() {
    Vector2D Vector[5] = {
        Vector2D(1, 2),
        Vector2D(3, 4),
        Vector2D(5, 6),
        Vector2D(7, 8),
        Vector2D(9, 10)
    };

    Vector2D media = calcularMedia(Vector, 5);

    cout << "La media aritmetica de los vectores es: (" << media.x << ", " << media.y << ")" << endl;

    return 0;
}
