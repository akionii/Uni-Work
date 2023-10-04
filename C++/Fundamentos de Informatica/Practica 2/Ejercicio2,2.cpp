#include <iostream>
#include <cmath>

int main()
{
    double numero;

    std::cout << "Ingrese un numero real: ";
    std::cin >> numero;

    if (numero < 0)
    {
        std::cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo." << std::endl;
    }
    else
    {
        double raiz_cuadrada = sqrt(numero);
        std::cout << "La raiz cuadrada de " << numero << " es: " << raiz_cuadrada << std::endl;
    }

    return 0;
}
