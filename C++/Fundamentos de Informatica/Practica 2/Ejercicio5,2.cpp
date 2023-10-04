#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mes, anio;

    std::cout << "Introduce el mes (1-12): ";
    std::cin >> mes;

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        std::cout << "El mes tiene 31 dias." << std::endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        std::cout << "El mes tiene 30 dias." << std::endl;
        break;

    case 2:
        std::cout << "Introduce el ano: ";
        std::cin >> anio;

        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        {
            std::cout << "El mes de febrero tiene 29 dias (ano bisiesto)." << std::endl;
        }
        else
        {
            std::cout << "El mes de febrero tiene 28 dias (ano no bisiesto)." << std::endl;
        }
        break;

    default:
        std::cout << "Mes no valido. Por favor, introduce un numero de mes valido (1-12)." << std::endl;
    }

    return 0;
}