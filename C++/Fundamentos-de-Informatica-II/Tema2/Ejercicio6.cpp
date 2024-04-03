// Ejercicio6.cpp
#include <iostream>
using namespace std;

int *direccion_menor(int *, int);

int main()
{
    int vector[] = {10, 5, 9, 4, 15};                                      // Array estático en el stack.
    int *elem_menor;                                                       // Puntero para almacenar la dirección del menor elemento.
    elem_menor = direccion_menor(vector, 5);                               // Se busca el menor elemento en el array.
    cout << "En " << elem_menor << " el valor es " << *elem_menor << endl; // Se imprime la dirección y el valor del menor elemento.
    return 0;
}

int *direccion_menor(int *p, int size)
{
    int *dir_menor = p; // Se inicializa dir_menor con la dirección del primer elemento.
    for (int i = 1; i < size; i++)
    {
        if (*(p + i) < *dir_menor)
        {
            dir_menor = p + i; // Se actualiza dir_menor si se encuentra un elemento menor.
        }
    }
    return dir_menor; // Se retorna la dirección del menor elemento.
}
