#include<iostream>

using namespace std;

template <typename T> T varianzaElementos(T a[], T media , int n){
    int suma = 0, cuadrados = 0;
    for(int i = 0; i < n; i++){
        suma += a[i];
        cuadrados += a[i]*a[i];
    }
    int varianza = (cuadrados/n) - (media*media);
    return varianza;
}

int main() {
    const int N = 7;
    int a[N];

    cout << "Introduzca " << N << " numeros: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i];    
    }

    int suma = 0;
    for (int i = 0; i < N; i++) {
        suma += a[i];
    }
   
    int varianza, media;
    
    media = suma/N;
    varianza = varianzaElementos(a, media, N);

    cout << "La varianza es: " << varianza << endl;

    return 0;
}