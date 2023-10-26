#include <iostream>

using namespace std;

int main()
{
    int n1, n2, suma = 0;

    cout << "Introduce el primer numero: ";
    cin >> n1;

    cout << "Introduce el segundo numero: ";
    cin >> n2;

    for (int i = 1; i <= n1; i++)
    {
        suma += n1;
    }

    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}