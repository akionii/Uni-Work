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
    cout << "El numero de impares introducidos es: " << impares - 1 << endl;

    return 0;
}