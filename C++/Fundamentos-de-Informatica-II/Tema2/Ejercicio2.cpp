// Ejercicio2.cpp
#include <iostream>
using namespace std;

int g(int, int);
int f(int, int);

int main()
{
    int x = 3;         // Al inicio, x se aloja en el stack con un valor de 3.
    x = f(5, 6);       // Se llama a f, modificando el valor de x con el retorno de f.
    cout << x << endl; // Se imprime el valor final de x.
    return 0;
}

int g(int a, int b)
{
    int c; // Variable local sin inicializar, alojada en el stack.
    cout << "Al entrar en g: a = " << a << " b = " << b << endl;
    a = a + b; // Se modifica a con la suma de a y b.
    c = a + 4; // Se asigna a c el valor de a más 4.
    cout << "Antes de salir de g: a = " << a << " b = " << b << " c = " << c << endl;
    return c; // Se retorna c.
}

int f(int a, int b)
{
    int c;         // Variable local sin inicializar, alojada en el stack.
    int d = 5;     // Variable local inicializada con 5, alojada en el stack.
    c = a + b + d; // Se calcula la suma y se asigna a c.
    cout << "Antes de g: a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
    d = g(a, b + c); // Se llama a g y se modifica d con el retorno de g.
    a = a + d;       // Se modifican a y b con los nuevos valores.
    b = b + a;
    cout << "Después de g: a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
    return (d + 2); // Se retorna d más 2.
}
