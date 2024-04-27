// Ejercicio1.cpp
#include <iostream>
using namespace std;

int funcion1(int, int);

int main()
{
    int x = 7;          // Al inicio, x se aloja en el stack con un valor de 7.
    x = funcion1(4, 8); // Se llama a funcion1, pasando los argumentos 4 y 8. El valor de x se modifica con el retorno de funcion1.
    cout << x << endl;  // Se imprime el valor final de x.
    return 0;
}

int funcion1(int arg1, int arg2)
{
    int local1;                    // Variable local sin inicializar, alojada en el stack al entrar a funcion1.
    int local2 = 5;                // Variable local inicializada con 5, alojada en el stack.
    local1 = arg1 + arg2 + local2; // Se calcula la suma y se asigna a local1.
    return (local1 + 3);           // Se retorna el valor de local1 más 3.
}
