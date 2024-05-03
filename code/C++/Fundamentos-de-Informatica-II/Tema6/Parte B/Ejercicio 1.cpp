#include <iostream>
#define MAX 100

using namespace std;

template <typename T> T mediaAritmeticaElementos(T a[], int n) {
    int resultado, suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += a[i];
    }
    resultado = suma / n;
    return resultado;
}

int main() {
    int a[MAX];
    int n, mediaAritmetica;
    
    do {
        cout << "CALCULO DE LA MEDIA ARITMETICA." << endl;
        cout << "Introduzca una cantidad de numeros: ";
        cin >> n;
    } while (n > 100);

    cout << "Introduzca los numeros: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    mediaAritmetica = mediaAritmeticaElementos(a, n);

    cout << "la media aritmetica es: " << mediaAritmetica;

    return 0;
}