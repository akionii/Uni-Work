#include <iostream>
#include <vector>

using namespace std;

// Función para buscar un elemento en una matriz y devolver su posición
pair<int, int> buscarElemento(const vector<vector<int>> &matriz, int elemento)
{
    int m = matriz.size();
    int n = matriz[0].size();

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matriz[i][j] == elemento)
            {
                return {i, j};
            }
        }
    }

    // Devolver {-1, -1} si no se encuentra el elemento
    return {-1, -1};
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

    int elementoBuscar;
    cout << "Ingrese el elemento a buscar: ";
    cin >> elementoBuscar;

    // Llamar a la función para buscar el elemento
    pair<int, int> resultado = buscarElemento(matriz, elementoBuscar);

    if (resultado.first != -1 && resultado.second != -1)
    {
        cout << "Elemento encontrado en la fila " << resultado.first << " y columna " << resultado.second << endl;
    }
    else
    {
        cout << "Elemento no encontrado en la matriz." << endl;
    }

    return 0;
}
