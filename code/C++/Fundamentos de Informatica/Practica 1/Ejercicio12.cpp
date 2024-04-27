#include <iostream>

int main() {
    // Dinero total disponible para los proyectos
    double dinero_total = 0;
    
    std::cout << "Introduzca el dinero total del proyecto: ";
    std::cin >> dinero_total;

    // Porcentajes de dinero para cada ciudad
    double porcentaje_cordoba = 0.30;
    double porcentaje_sevilla = 0.50;
    double porcentaje_malaga = 1.0 - porcentaje_cordoba - porcentaje_sevilla;
    
    // Dinero para cada ciudad
    double dinero_cordoba, dinero_sevilla, dinero_malaga;
    
    // Calcula el dinero para cada ciudad
    dinero_cordoba = porcentaje_cordoba * dinero_total;
    dinero_sevilla = porcentaje_sevilla * dinero_total;
    dinero_malaga = porcentaje_malaga * dinero_total;
    
    // Porcentajes de dinero para las sedes de cada ciudad
    double porcentaje_cordoba_capital = 0.50;
    double porcentaje_cordoba_palma = 0.20;
    double porcentaje_cordoba_lucena = 0.30;
    
    double porcentaje_sevilla_capital = 0.35;
    double porcentaje_sevilla_dos_hermanas = 0.65;
    
    double porcentaje_malaga_capital = 0.80;
    double porcentaje_malaga_benalmadena = 0.20;
    
    // Dinero para cada sede de cada ciudad
    double dinero_cordoba_capital, dinero_cordoba_palma, dinero_cordoba_lucena;
    double dinero_sevilla_capital, dinero_sevilla_dos_hermanas;
    double dinero_malaga_capital, dinero_malaga_benalmadena;
    
    // Calcula el dinero para cada sede de cada ciudad
    dinero_cordoba_capital = porcentaje_cordoba_capital * dinero_cordoba;
    dinero_cordoba_palma = porcentaje_cordoba_palma * dinero_cordoba;
    dinero_cordoba_lucena = porcentaje_cordoba_lucena * dinero_cordoba;
    
    dinero_sevilla_capital = porcentaje_sevilla_capital * dinero_sevilla;
    dinero_sevilla_dos_hermanas = porcentaje_sevilla_dos_hermanas * dinero_sevilla;
    
    dinero_malaga_capital = porcentaje_malaga_capital * dinero_malaga;
    dinero_malaga_benalmadena = porcentaje_malaga_benalmadena * dinero_malaga;
    
    // Muestra los resultados por pantalla
    std::cout << "Dinero para Cordoba: " << dinero_cordoba << " euros" << std::endl;
    std::cout << "  - Capital: " << dinero_cordoba_capital << " euros" << std::endl;
    std::cout << "  - Palma del Rio: " << dinero_cordoba_palma << " euros" << std::endl;
    std::cout << "  - Lucena: " << dinero_cordoba_lucena << " euros" << std::endl;
    
    std::cout << "Dinero para Sevilla: " << dinero_sevilla << " euros" << std::endl;
    std::cout << "  - Capital: " << dinero_sevilla_capital << " euros" << std::endl;
    std::cout << "  - Dos Hermanas: " << dinero_sevilla_dos_hermanas << " euros" << std::endl;
    
    std::cout << "Dinero para Málaga: " << dinero_malaga << " euros" << std::endl;
    std::cout << "  - Capital: " << dinero_malaga_capital << " euros" << std::endl;
    std::cout << "  - Benalmádena: " << dinero_malaga_benalmadena << " euros" << std::endl;
    
    return 0;
}
