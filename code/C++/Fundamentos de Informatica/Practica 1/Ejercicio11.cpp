#include <iostream>

int main() {
    const int numEstablecimientos = 4;

    // Array para almacenar los precios de los establecimientos
    double precios[numEstablecimientos];
    double total = 0.0;

    // Leer los precios de los establecimientos y calcular el total
    for (int i = 0; i < numEstablecimientos; ++i) {
        std::cout << "Ingrese el precio del producto en el establecimiento " << i + 1 << ": ";
        std::cin >> precios[i];
        total += precios[i];
    }

    // Calcular la media de los precios
    double media = total / numEstablecimientos;

    // Mostrar la media
    std::cout << "El precio medio del producto es: " << media << std::endl;

    // Calcular y mostrar el porcentaje que representa cada precio con respecto al total
    for (int i = 0; i < numEstablecimientos; ++i) {
        double porcentaje = (precios[i] / total) * 100;
        std::cout << "El precio en el establecimiento " << i + 1 << " representa el " << porcentaje << "% del total." << std::endl;
    }

    return 0;
}
