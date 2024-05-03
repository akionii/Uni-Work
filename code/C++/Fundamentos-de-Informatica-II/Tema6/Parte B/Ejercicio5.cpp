#include<iostream>

using namespace std;

template <typename T, typename U > void encontrarDirecciones(T& obj1, U& obj2, T** dir1, U** dir2) {
    *dir1 = &obj1;
    *dir2 = &obj2;
}

int main() {
    int n1 = 21;
    float n2 = 64;
    int* direccion1 = 0;
    float* direccion2 = 0;

    encontrarDirecciones(n1, n2, &direccion1, &direccion2);

    cout << "direccion de numero 1: " << direccion1 << endl;
    cout << "direccion de numero 2: " << direccion2 << endl;

    return 0;
}