#include <iostream>

int main() {
    // Media de desperdicio de comida en millones de kg por semana
    double mediaDesperdicioPorSemana = 23.6;

    int numeroSemanas;
    std::cout << "Ingrese el numero de semanas: ";
    std::cin >> numeroSemanas;

    // Calcular el número total de kilos desperdiciados
    double totalKilosDesperdiciados = mediaDesperdicioPorSemana * numeroSemanas;

    std::cout << "Durante " << numeroSemanas << " semanas, se desperdiciaron aproximadamente " << totalKilosDesperdiciados << " millones de kg de comida." << std::endl;

    return 0;
}

