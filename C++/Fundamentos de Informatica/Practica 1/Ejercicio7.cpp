#include <iostream>
#include <string>
#include <chrono>

int main() {
    // Solicitar el nombre de la persona
    std::cout << "Ingrese su nombre: ";
    std::string nombre;
    std::getline(std::cin, nombre);

    // Solicitar los apellidos de la persona
    std::cout << "Ingrese sus apellidos: ";
    std::string apellidos;
    std::getline(std::cin, apellidos);

    // Solicitar el año de nacimiento
    std::cout << "Ingrese su ano de nacimiento: ";
    int anio_nacimiento;
    std::cin >> anio_nacimiento;

    // Calcular la edad
    int edad = 2023 - anio_nacimiento;

    // Mostrar el mensaje con la información
    std::cout << "Hola " << nombre << " " << apellidos << ", tienes " << edad << " anos." << std::endl;

    return 0;
}
