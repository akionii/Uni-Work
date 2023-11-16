#include <iostream>
#include <vector>

using namespace std;

void intercambiarFilas(vector<vector<int>>& matriz, std::size_t a, std::size_t b) {
    if (a < matriz.size() && b < matriz.size()) {
        swap(matriz[a], matriz[b]);
    }
}

void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
}

int main() {
    std::size_t m, n;  // Cambiado el tipo de m y n

    cout << "Ingrese el número de filas: ";
    cin >> m;
    cout << "Ingrese el número de columnas: ";
    cin >> n;

    vector<vector<int>> matriz(m, vector<int>(n));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (std::size_t i = 0; i < m; ++i) {
        for (std::size_t j = 0; j < n; ++j) {
            cin >> matriz[i][j];
        }
    }

    std::size_t filaA, filaB;  // Cambiado el tipo de filaA y filaB
    cout << "Ingrese las filas a intercambiar (0-indexed): ";
    cin >> filaA >> filaB;

    intercambiarFilas(matriz, filaA, filaB);

    cout << "\nMatriz antes del intercambio:" << endl;
    mostrarMatriz(matriz);

    return 0;
}
