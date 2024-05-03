#include <iostream>
#define LIMITE 100

using namespace std;

template <typename T>
T calcularPromedio(T elementos[], int cantidad)
{
    T total = 0;
    for (int indice = 0; indice < cantidad; indice++)
    {
        total += elementos[indice];
    }
    return total / cantidad;
}

int main()
{
    int numeros[LIMITE];
    int cantidad, promedio;

    do
    {
        cout << "CALCULO DEL PROMEDIO" << endl;
        cout << "Ingrese el número de elementos: ";
        cin >> cantidad;
    } while (cantidad > LIMITE);

    cout << "Ingrese los valores de los elementos: ";
    for (int i = 0; i < cantidad; i++)
    {
        cin >> numeros[i];
    }

    promedio = calcularPromedio(numeros, cantidad);

    cout << "El promedio es: " << promedio;

    return 0;
}
