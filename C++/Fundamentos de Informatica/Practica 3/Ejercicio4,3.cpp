#include <iostream>
#include <vector>

class VectorManager
{
public:
    VectorManager(std::size_t maxSize) : maxSize(maxSize) {}

    void ejecutarMenu();

private:
    std::vector<int> vec;
    std::size_t maxSize;

    void agregarElemento();
    void eliminarElemento();
    void mostrarContenido() const;
    int contarDivisoresDeCinco() const;
};

void imprimirSeparador()
{
    std::cout << "\n----------------------------------------\n"
              << std::endl;
}

void VectorManager::ejecutarMenu()
{
    char opcion;

    do
    {
        imprimirSeparador();
        std::cout << "Menú:" << std::endl;
        std::cout << "1. Añadir un elemento al vector" << std::endl;
        std::cout << "2. Eliminar un elemento del vector" << std::endl;
        std::cout << "3. Mostrar el contenido del vector" << std::endl;
        std::cout << "4. Contar el número de divisores de 5" << std::endl;
        std::cout << "5. Terminar" << std::endl;
        std::cout << "Ingrese la opción: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case '1':
            agregarElemento();
            break;
        case '2':
            eliminarElemento();
            break;
        case '3':
            mostrarContenido();
            break;
        case '4':
            std::cout << "\nNúmero de divisores de 5: " << contarDivisoresDeCinco() << std::endl;
            break;
        case '5':
            std::cout << "\nTerminando el programa." << std::endl;
            break;
        default:
            std::cout << "\nOpción no válida. Inténtelo de nuevo." << std::endl;
        }

    } while (opcion != '5');
}

void VectorManager::agregarElemento()
{
    imprimirSeparador();
    if (vec.size() < maxSize)
    {
        int elemento;
        std::cout << "Ingrese el elemento a añadir: ";
        std::cin >> elemento;
        vec.push_back(elemento);
        std::cout << "Elemento añadido correctamente." << std::endl;
    }
    else
    {
        std::cout << "El vector está lleno. No se pueden añadir más elementos." << std::endl;
    }
}

void VectorManager::eliminarElemento()
{
    imprimirSeparador();
    if (!vec.empty())
    {
        std::cout << "Eliminando el último elemento del vector." << std::endl;
        vec.pop_back();
        std::cout << "Elemento eliminado correctamente." << std::endl;
    }
    else
    {
        std::cout << "El vector está vacío. No se pueden eliminar elementos." << std::endl;
    }
}

void VectorManager::mostrarContenido() const
{
    imprimirSeparador();
    std::cout << "Contenido del vector:" << std::endl;
    if (vec.empty())
    {
        std::cout << "El vector está vacío." << std::endl;
    }
    else
    {
        for (const auto &elemento : vec)
        {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
    imprimirSeparador();
}

int VectorManager::contarDivisoresDeCinco() const
{
    int contador = 0;
    for (const auto &elemento : vec)
    {
        if (elemento % 5 == 0)
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    VectorManager vectorManager(10);
    vectorManager.ejecutarMenu();

    return 0;
}
