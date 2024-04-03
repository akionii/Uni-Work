#include <stdio.h>
 
int main() {
    /* Variables enteras definidas por el usuario 
    sobre las que se fundamentaran las oparaciones 
    necesarias para hallar el mcd y mcm */
    int num1, num2;
    num1 = 0;
    num2 = 0;
    
    /* Variables enteras en las que se salvaran 
    los valores resultantes (Minimo ..., Maximo ...)*/
    int mcd, mcm;
    mcd = 0;
    mcm = 0;
    
    /* Variables usadas durante el algoritmo para salvar 
    el resto, numerador y denominador */
    int resto, numerador, denominador;
    resto = 0;
    numerador = 0;
    denominador = 0;
    
    // Entrada de datos de las variables num1 y num2
    printf(" Intrododuzca un primer numero entero: ");
    scanf("%d", &num1);
    printf(" Intrododuzca un segundo numero entero: ");
    scanf("%d", &num2);
    
    /* Asignando el valor de numerador al la variable con mayor valor y denominador a la menor. 
    Ademas de calcular el resto de la division entre el numerador y el denominador*/
    numerador = (num1>num2)?num1:num2;
    denominador = (num1<num2)?num1:num2;
    resto = numerador % denominador;
    
    /* Mientras el resto no se igual a cero se actualizará el valor del denominador.
    Calculando el resto de la división entera entre el numerador y el denominador */
    while (resto != 0) {
        numerador   = denominador;
        denominador = resto;
        resto   = numerador % denominador;
    }
    
    // Salvando los valores resultantes en sus variables correspondientes
    mcd = denominador;
    mcm = num1 * num2 / mcd;
    
    // Mostrando por pantalla los resultados 'mcd' y 'mcm'
    printf("\n El M.C.D de %d y %d es: %d\n", num1, num2, mcd);
    printf(" El M.C.M de %d y %d es: %d\n", num1, num2, mcm);
    
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
        printf("\n ----------------------------- Reiniciando Programa  ----------------------------- \n");
        main(); // Vuelve al inicio de la función main()
    }
}
