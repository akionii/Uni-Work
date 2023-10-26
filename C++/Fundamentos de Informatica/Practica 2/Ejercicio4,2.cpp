#include <iostream>
#include <cmath>

const double pi = 3.14159265359;

int main()
{
    double radio;
    int opcion;

    std::cout << "Ingrese el valor del radio: ";
    std::cin >> radio;
    std::cout << std::endl;

    std::cout << "1. Longitud de una circunferencia.\n"
              << std::endl;
    std::cout << "2. Area de una circunferencia.\n"
              << std::endl;
    std::cout << "3. Area de una esfera.\n"
              << std::endl;
    std::cout << "4. Volumen de una esfera.\n"
              << std::endl;

    std::cout << "Opcion: ";
    std::cin >> opcion;
    std::cout << std::endl;

    switch (opcion)
    {
    case 1:
    {
        // Calcular longitud de la circunferencia
        double longitud = 2 * pi * radio;
        std::cout << "Longitud de la circunferencia: " << longitud << "\n";
        break;
    }
    case 2:
    {
        // Calcular area de la circunferencia
        double areaCircunferencia = pi * pow(radio, 2);
        std::cout << "Area de la circunferencia: " << areaCircunferencia << "\n";
        break;
    }
    case 3:
    {
        // Calcular area de la esfera
        double areaEsfera = 4 * pi * pow(radio, 2);
        std::cout << "Area de la esfera: " << areaEsfera << "\n";
        break;
    }
    case 4:
    {
        // Calcular volumen de la esfera
        double volumenEsfera = (4.0 / 3.0) * pi * pow(radio, 3);
        std::cout << "Volumen de la esfera: " << volumenEsfera << "\n";
        break;
    }
    default:
        std::cout << "Opcion no valida.\n";
    }

    return 0;
}
