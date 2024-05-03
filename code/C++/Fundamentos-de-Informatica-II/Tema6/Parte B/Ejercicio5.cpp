#include<iostream>

using namespace std;

template <typename T, typename U > void obtenerDirecciones(T& var1, U& var2, T** ptr1, U** ptr2) {
    *ptr1 = &var1;
    *ptr2 = &var2;
}

int main() {
    int entero = 16;
    float decimal = 32;
    int* ptrEntero = nullptr;
    float* ptrDecimal = nullptr;

    obtenerDirecciones(entero, decimal, &ptrEntero, &ptrDecimal);

    cout << "Dirección del entero: " << ptrEntero << endl;
    cout << "Dirección del decimal: " << ptrDecimal << endl;

    return 0;
}
