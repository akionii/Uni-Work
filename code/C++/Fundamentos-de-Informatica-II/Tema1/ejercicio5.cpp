#include <iostream>

using namespace std;

int multiplicarVectores(int *v1, int *v2, int n) {
    int resultado = 0;
    for (int i = 0; i < n; i++) {
        resultado += v1[i] * v2[i];
    }
    return resultado;
}

int main() {
    int v1[] = {1, 2, 3};
    int v2[] = {4, 5, 6};
    int n = 3;
    cout << "La multiplicación de los vectores es: " << multiplicarVectores(v1, v2, n) << endl;
    return 0;
}

