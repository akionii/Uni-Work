#include <iostream>
#include <vector>

// Función para invertir un vector
void invertirVector(std::vector<int>& vec) {
    int inicio = 0;
    int fin = vec.size() - 1;

    while (inicio < fin) {
        // Intercambia los elementos en las posiciones "inicio" y "fin"
        int temp = vec[inicio];
        vec[inicio] = vec[fin];
        vec[fin] = temp;

        inicio++;
        fin--;
    }
}

int main() {
    std::vector<int> vectorOriginal;
    int n;

    // Solicitar al usuario la cantidad de elementos del vector
    std::cout << "Ingrese la cantidad de elementos del vector: ";
    std::cin >> n;

    // Solicitar al usuario los elementos del vector
    std::cout << "Ingrese los elementos del vector:" << std::endl;
    for (int i = 0; i < n; i++) {
        int elemento;
        std::cin >> elemento;
        vectorOriginal.push_back(elemento);
    }

    // Invertir el vector
    invertirVector(vectorOriginal);

    // Mostrar el vector invertido
    std::cout << "Vector invertido: ";
    for (int i = 0; i < n; i++) {
        std::cout << vectorOriginal[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
