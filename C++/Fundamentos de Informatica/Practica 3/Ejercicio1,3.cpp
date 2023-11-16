#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int n;

    // 1. Introducir el numero de elementos del vector.
    std::cout << "Introduce el numero de elementos del vector: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "El numero de elementos debe ser positivo." << std::endl;
        return 1;
    }

    // 2. Introducir los elementos del vector.
    std::vector<double> vector(n);
    std::cout << "Introduce los elementos del vector:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> vector[i];
    }

    // 3. Mostrar los elementos del vector.
    std::cout << "Elementos del vector: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << vector[i] << " ";
    }
    std::cout << std::endl;

    // 4. Calcular la suma de los elementos del vector.
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += vector[i];
    }
    std::cout << "Suma de los elementos: " << suma << std::endl;

    // 5. Calcular la media de los elementos del vector.
    double media = suma / n;
    std::cout << "Media de los elementos: " << media << std::endl;

    // 6. Calcular la varianza de los elementos del vector.
    double varianza = 0;
    for (int i = 0; i < n; i++)
    {
        varianza += pow(vector[i] - media, 2);
    }
    varianza /= n;
    std::cout << "Varianza de los elementos: " << varianza << std::endl;

    // 7. Determinar el valor maximo de los elementos del vector.
    double maximo = vector[0];
    for (int i = 1; i < n; i++)
    {
        if (vector[i] > maximo)
        {
            maximo = vector[i];
        }
    }
    std::cout << "Valor maximo: " << maximo << std::endl;

    // 8. Determinar el valor minimo de los elementos del vector.
    double minimo = vector[0];
    for (int i = 1; i < n; i++)
    {
        if (vector[i] < minimo)
        {
            minimo = vector[i];
        }
    }
    std::cout << "Valor minimo: " << minimo << std::endl;

    return 0;
}
