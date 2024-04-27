#include <iostream>
#include <cmath>

int main() {
    double Cateto_Op, Cateto_Con;

    // Solicitar al usuario que ingrese los catetos
    std::cout << "Ingresa el valor del cateto opuesto: ";
    std::cin >> Cateto_Op;

    std::cout << "Ingresa el valor cateto contiguo: ";
    std::cin >> Cateto_Con;

    // Calcular la hipotenusa usando el teorema de Pitágoras
    double hipotenusa = sqrt(pow(Cateto_Op, 2) + pow(Cateto_Con, 2));

    // Mostrar el resultado
    std::cout << "La hipotenusa del triangulo es: " << hipotenusa << std::endl;

    return 0;
}
