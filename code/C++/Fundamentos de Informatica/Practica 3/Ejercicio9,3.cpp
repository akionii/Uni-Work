#include <iostream>

using namespace std;

// Definir la estructura para representar matrices
struct Matriz
{
    int nFil;
    int nCol;
    int m[100][100];
};

// Función para mostrar la matriz por pantalla
void mostrarMatriz(const Matriz &matriz)
{
    for (int i = 0; i < matriz.nFil; ++i)
    {
        for (int j = 0; j < matriz.nCol; ++j)
        {
            cout << matriz.m[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para calcular la suma de los elementos por debajo de la diagonal principal
int sumaDebajoDiagonalPrincipal(const Matriz &matriz)
{
    int suma = 0;

    for (int i = 0; i < matriz.nFil; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            suma += matriz.m[i][j];
        }
    }

    return suma;
}

int main()
{
    Matriz matriz;

    cout << "Ingrese el número de filas: ";
    cin >> matriz.nFil;
    cout << "Ingrese el número de columnas: ";
    cin >> matriz.nCol;

    // Verificar si la matriz es cuadrada
    if (matriz.nFil != matriz.nCol)
    {
        cout << "La matriz no es cuadrada. No se realizará ninguna operación." << endl;
        return 1; // Salir del programa con código de error
    }

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < matriz.nFil; ++i)
    {
        for (int j = 0; j < matriz.nCol; ++j)
        {
            cin >> matriz.m[i][j];
        }
    }

    cout << "\nMatriz ingresada:" << endl;
    mostrarMatriz(matriz);

    // Calcular y mostrar la suma de los elementos por debajo de la diagonal principal
    int suma = sumaDebajoDiagonalPrincipal(matriz);
    cout << "\nSuma de los elementos por debajo de la diagonal principal: " << suma << endl;

    return 0;
}
