// Ejercicio9.cpp
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(10);                                            // Se crea una variable en el heap y se almacena su dirección en ptr.
    cout << "El valor de la variable en el heap es: " << *ptr << endl; // Se imprime el valor de la variable.

    delete ptr;    // Se elimina la variable del heap para liberar la memoria.
    ptr = nullptr; // Se asigna nullptr a ptr para evitar un puntero colgante.

    return 0;
}
