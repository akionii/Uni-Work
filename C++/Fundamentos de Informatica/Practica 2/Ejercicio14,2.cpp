#include <iostream>

int calcularProductoDigitos(int numero)
{
    int producto = 1;

    while (numero != 0)
    {
        int digito = numero % 10; // Obtiene el ultimo digito
        producto *= digito;       // Multiplica el digito al producto actual
        numero /= 10;             // Elimina el ultimo digito
    }

    return producto;
}

int main()
{
    int numero;

    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;

    int producto = calcularProductoDigitos(numero);

    std::cout << "El producto de los digitos es: " << producto << std::endl;

    return 0;
}
