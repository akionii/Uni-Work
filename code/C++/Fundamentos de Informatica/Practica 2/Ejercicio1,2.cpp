#include <iostream>

int main()
{
    double num1, num2;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Introduce dos numeros reales: ";
    std::cin >> num1 >> num2;

    // Determinar el número mayor usando un operador ternario
    double mayor = (num1 > num2) ? num1 : num2;

    // Mostrar el resultado
    if (num1 == num2)
    {
        std::cout << "Los dos numeros introducidos son iguales son iguales." << std::endl;
    }
    else
    {
        std::cout << "El numero de mayor valor numerico es: " << mayor << std::endl;
    }

    return 0;
}
