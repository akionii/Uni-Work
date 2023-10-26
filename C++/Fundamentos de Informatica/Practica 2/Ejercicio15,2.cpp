#include <iostream>
#include <cmath>

bool esPrimo(int numero)
{
    if (numero < 2)
        return false;

    if (numero == 2)
        return true;

    if (numero % 2 == 0)
        return false;

    int limite = static_cast<int>(std::sqrt(numero)) + 1;

    for (int i = 3; i <= limite; i += 2)
    {
        if (numero % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int numero;

    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;

    if (esPrimo(numero))
        std::cout << numero << " es un numero primo." << std::endl;
    else
        std::cout << numero << " no es un numero primo." << std::endl;

    return 0;
}
