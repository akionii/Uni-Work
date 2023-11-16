#include <iostream>
#include <vector>

using namespace std;

// Función para calcular la media de cada columna en una matriz de reales
void calcularMediaColumnas(const vector<vector<double>> &matriz)
{
    int m = matriz.size();
    int n = matriz[0].size();

    // Vector para almacenar las medias de cada columna
    vector<double> medias(n, 0.0);

    for (int j = 0; j < n; ++j)
    {
        double suma = 0.0;
        for (int i = 0; i < m; ++i)
        {
            suma += matriz[i][j];
        }
        medias[j] = suma / m;
    }

    // Mostrar las medias de cada columna
    cout << "Media de cada columna:" << endl;
    for (double media : medias)
    {
        cout << media << " ";
    }
    cout << endl;
}

int main()
{
    int m, n;

    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    // Crear una matriz de tamaño m x n para números reales
    vector<vector<double>> matriz(m, vector<double>(n));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> matriz[i][j];
        }
    }

    // Llamar a la función para calcular medias de columnas
    calcularMediaColumnas(matriz);

    return 0;
}
