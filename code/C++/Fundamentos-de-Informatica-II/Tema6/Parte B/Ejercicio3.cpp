#include <iostream>

using namespace std;

template <typename T>
T calcularVarianza(T elementos[], T promedio, int tam)
{
    T sumaElementos = 0, sumaCuadrados = 0;
    for (int i = 0; i < tam; i++)
    {
        sumaElementos += elementos[i];
        sumaCuadrados += elementos[i] * elementos[i];
    }
    T varianza = (sumaCuadrados / tam) - (promedio * promedio);
    return varianza;
}

int main()
{
    const int TAMANIO = 5;
    int numeros[TAMANIO];

    cout << "Ingrese " << TAMANIO << " números: ";
    for (int i = 0; i < TAMANIO; i++)
    {
        cin >> numeros[i];
    }

    int sumaTotal = 0;
    for (int i = 0; i < TAMANIO; i++)
    {
        sumaTotal += numeros[i];
    }

    int varianzaCalculada, promedio;

    promedio = sumaTotal / TAMANIO;
    varianzaCalculada = calcularVarianza(numeros, promedio, TAMANIO);

    cout << "La varianza calculada es: " << varianzaCalculada << endl;

    return 0;
}
