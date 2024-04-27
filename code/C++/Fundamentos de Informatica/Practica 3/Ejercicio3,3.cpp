#include <iostream>
#include <vector>
#include <cmath>

// Funcion para calcular el valor del polinomio en un punto dado
double evaluarPolinomio(const std::vector<double>& coeficientes, double x) {
    double resultado = 0.0;
    int grado = coeficientes.size() - 1;

    for (int i = 0; i <= grado; i++) {
        resultado += coeficientes[i] * std::pow(x, grado - i);
    }

    return resultado;
}

int main() {
    int grado;
    
    // 1. Leer un polinomio de grado N introducido por el usuario.
    std::cout << "Ingrese el grado del polinomio: ";
    std::cin >> grado;
    
    // Verificar que el grado sea válido (no negativo).
    if (grado < 0) {
        std::cerr << "El grado del polinomio debe ser no negativo." << std::endl;
        return 1;
    }
    
    std::vector<double> coeficientes(grado + 1);
    
    std::cout << "Ingrese los coeficientes del polinomio, comenzando por el termino de mayor grado:" << std::endl;
    for (int i = grado; i >= 0; i--) {
        std::cout << "Coeficiente para x^" << i << ": ";
        std::cin >> coeficientes[i];
    }

    // 2. Mostrar el polinomio por pantalla de manera adecuada.
    std::cout << "Polinomio ingresado: ";
    for (int i = grado; i >= 0; i--) {
        if (coeficientes[i] != 0) {
            if (i < grado) {
                std::cout << " + ";
            }
            std::cout << coeficientes[i];
            if (i > 0) {
                std::cout << "x^" << i;
            }
        }
    }
    std::cout << std::endl;
    
    // 3. Evaluar el polinomio en un punto X introducido por el usuario.
    double x;
    std::cout << "Ingrese el valor de X para evaluar el polinomio: ";
    std::cin >> x;
    
    double resultado = evaluarPolinomio(coeficientes, x);
    std::cout << "Resultado de evaluar el polinomio en X: " << resultado << std::endl;
    
    return 0;
}
