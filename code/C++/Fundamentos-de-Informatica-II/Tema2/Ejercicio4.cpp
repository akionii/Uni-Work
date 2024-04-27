// Ejercicio4.cpp
#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
    int n = 4;                                             // n se aloja en el stack con un valor inicial de 4.
    int res = fibonacci(n);                                // Se calcula el fibonacci de n y se almacena en res.
    cout << "Fibonacci de " << n << " es " << res << endl; // Se imprime el resultado.
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0; // Caso base: n == 0.
    else if (n == 1)
        return 1; // Caso base: n == 1.
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // Caso recursivo: suma de fibonacci de n-1 y n-2.
}
