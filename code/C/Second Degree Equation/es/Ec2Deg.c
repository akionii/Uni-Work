#include<stdio.h>
#include<math.h>
 
int main() {
    
    /* Definición de las variables para los valores a, b y c 
    de la ecuación general de segundo grado de forma: "axˆ2 + bx + c = 0" */
    float a, b, c;
    a = 0;
    b = 0;
    c = 0;
    
    // Variables para las raizes reales resultantes
    float raiz1, raiz2;
    raiz1 = 0;
    raiz2 = 0;
    
    // Variable de parte real y temporal
    float temp, pReal;
    temp = 0;
    
    // Entrada de datos de las variables a, b y c
    printf("\n Introduzca el valor de a: ");
    scanf("%f", &a);
    /* Restringiendo el input del usuario para a = 0. 
    Ya que en ese caso no se estaria resolviendo una ecuacion de segundo grado. */
    while (a == 0) {
        printf("\n Introduzca un valor de a distinto de 0: ");
        scanf("%f", &a);
    }
    printf(" Introduzca el valor de b: ");
    scanf("%f", &b);
    printf(" Introduzca el valor de c: ");
    scanf("%f", &c);
    
    /* Comprobando que la seccion interior a la raiz sea menor o mayor que 0.
    Para asi tener en cuenta si se esta trabajando con valores imaginarios o no */
    temp = b * b - 4 * a * c;
    
    if(temp >= 0) // Trabajando con valores reales
    {
        
        // Primera seccion de la ecuacion salvada en temp [sqrt]
        temp = sqrt(b * b - 4 * a * c);
        
        // Segunda seccion de la ecuacion salvada en raiz1 [+], raziz2 [-]
        raiz1 = (-b + temp) / (2.0 * a);
        raiz2 = (-b - temp) / (2.0 * a);
        
        // Mostrando por pantalla los resultados
        printf("\n El valor de la primera raiz es : %.2f", raiz1);
        printf("\n El valor de la segunda raiz es : %.2f", raiz2);
        printf("\n _______________________________________");
    }
    
    else if(temp < 0) // Trabajando con valores imaginarios
    {
        // Primera seccion de la ecuacion salvada en temp [sqrt(bˆ2-4)]
        temp = sqrt(-temp)/(2*a);
        // Segunda parte de la ecuacion salvada en pReal [-b/2a]
        pReal = -b/(2*a);
        
        // Mostrando por pantalla los resultados 
        printf("\n El valor de la primera raiz es : (%.2f + %.2f*(i))", pReal, temp);
        printf("\n El valor de la segunda raiz es : (%.2f - %.2f*(i))", pReal, temp);
        printf("\n _____________________________________________________________________");
    }
    
    /* Preguntandole al usuario si desea reiniciar o finalizar el programa */
    
    // Creando variable para salvar la respuesta de usuario
    int otraVez = 0;
    
    // Opción 1.
    printf("\n\n 1. Finalizar");
    // Opción 2.
    printf("\n 2. Otra vez");
    
    // Entrada del usuario
    printf("\n Su elección: ");
    scanf("%d", &otraVez);
    
    if(otraVez == 1) {
        // Finaliza Programa
    }
    else if(otraVez == 2) {
        printf("\n ------------------- Reiniciando Programa ------------------- n");
        main(); // Vuelve al inicio de la función main()
    }
    
    return (0);
}
