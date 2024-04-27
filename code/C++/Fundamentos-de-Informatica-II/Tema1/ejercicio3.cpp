#include <iostream>

using namespace std;

void ejercicio3(int *pe, double *pd, long l)
{
    *pd = static_cast<double>(*pe * l) / *pd;
}

int main()
{
    // Definición de variables
    int a = 10;
    double b = 8.1;
    long c = 6;

    // Mostrar el valor original de b
    cout << "Valor original de b: " << b << endl;

    // Llamada a la función ejercicio3
    ejercicio3(&a, &b, c);

    // Mostrar el valor de b después de ejecutar la función ejercicio3
    cout << "Valor de b después de ejercicio3: " << b << endl;

    return 0;
}
