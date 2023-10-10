/* Escribe y dise ˜na un programa que lea n ´umeros por teclado hasta que se introduzca un
-1. El programa mostrar´a por pantalla el n ´umero de pares e impares le´ıdos. */

#include <iostream>

using namespace std;

int main()
{
    int numero;
    int pares = 0;
    int impares = 0;

    cout << "Introduce una serie de numeros (-1 para finalizar): " << endl;

    while (numero != -1)
    {
        cin >> numero;
        cout << endl;

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    cout << "El numero de pares introducidos es: " << pares << endl;
    cout << "El numero de impares introducidos es: " << impares << endl;

    return 0;
}