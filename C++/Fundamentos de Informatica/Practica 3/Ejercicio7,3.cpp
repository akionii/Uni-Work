#include <iostream>
#include <vector>

using namespace std;

// Función para rotar una fila hacia la derecha en una matriz
void rotarFila(vector<vector<int>> &matriz, int fila, int k)
{
    int n = matriz[0].size();

    // Manejar rotaciones mayores a la longitud de la fila
    k = k % n;

    // Rotar la fila k posiciones hacia la derecha
    vector<int> filaRotada(n);
    for (int i = 0; i < n; ++i)
    {
        filaRotada[(i + k) % n] = matriz[fila][i];
    }

    matriz[fila] = filaRotada;
}

// Función para mostrar una matriz
void mostrarMatriz(const vector<vector<int>> &matriz)
{
    for (const auto &fila : matriz)
    {
        for (int elemento : fila)
        {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;

    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    // Crear una matriz de tamaño m x n
    vector<vector<int>> matriz(m, vector<int>(n));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matriz[i][j];
        }
    }

    int fila, k;
    cout << "Ingrese la fila a rotar y el número de posiciones (0-indexed): ";
    cin >> fila >> k;

    // Llamar a la función para rotar la fila
    rotarFila(matriz, fila, k);

    cout << "\nMatriz después de la rotación:" << endl;
    mostrarMatriz(matriz);

    return 0;
}
