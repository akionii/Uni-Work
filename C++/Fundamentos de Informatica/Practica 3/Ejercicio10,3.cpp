#include <iostream>
#include <cmath>

using namespace std;

// Definir la estructura para representar números complejos
struct NumeroComplejo
{
    double parteReal;
    double parteImaginaria;
};

// Función para leer un número complejo desde el teclado
NumeroComplejo leerNumeroComplejo()
{
    NumeroComplejo complejo;
    cout << "Ingrese la parte real: ";
    cin >> complejo.parteReal;
    cout << "Ingrese la parte imaginaria: ";
    cin >> complejo.parteImaginaria;
    return complejo;
}

// Función para mostrar un número complejo por pantalla
void mostrarNumeroComplejo(const NumeroComplejo &complejo)
{
    cout << complejo.parteReal;

    if (complejo.parteImaginaria >= 0)
    {
        cout << " + ";
    }
    else
    {
        cout << " - ";
    }

    cout << abs(complejo.parteImaginaria) << "i";
}

// Función para calcular la suma de un vector de números complejos
NumeroComplejo sumaNumerosComplejos(const NumeroComplejo numeros[], int n)
{
    NumeroComplejo suma = {0.0, 0.0};

    for (int i = 0; i < n; ++i)
    {
        suma.parteReal += numeros[i].parteReal;
        suma.parteImaginaria += numeros[i].parteImaginaria;
    }

    return suma;
}

// Función para calcular el complejo media a partir de la suma
NumeroComplejo calcularMedia(const NumeroComplejo &suma, int n)
{
    NumeroComplejo media;
    media.parteReal = suma.parteReal / n;
    media.parteImaginaria = suma.parteImaginaria / n;
    return media;
}

int main()
{
    int n;

    cout << "Ingrese el número de números complejos: ";
    cin >> n;

    // Verificar si n es mayor que 0
    if (n <= 0)
    {
        cout << "El número de números complejos debe ser mayor que 0." << endl;
        return 1; // Salir del programa con código de error
    }

    // Crear un vector para almacenar los números complejos
    NumeroComplejo numeros[100];

    cout << "\nIngrese los números complejos:" << endl;
    for (int i = 0; i < n; ++i)
    {
        numeros[i] = leerNumeroComplejo();
    }

    // Separador
    cout << "\n----------------------------------\n";

    cout << "Números complejos ingresados:" << endl;
    for (int i = 0; i < n; ++i)
    {
        mostrarNumeroComplejo(numeros[i]);
        cout << " ";
    }

    // Calcular la suma de los números complejos
    NumeroComplejo suma = sumaNumerosComplejos(numeros, n);

    // Calcular y mostrar la media de los números complejos
    NumeroComplejo media = calcularMedia(suma, n);

    // Separador
    cout << "\n----------------------------------\n";

    cout << "Complejo media: ";
    mostrarNumeroComplejo(media);
    cout << endl;

    return 0;
}
