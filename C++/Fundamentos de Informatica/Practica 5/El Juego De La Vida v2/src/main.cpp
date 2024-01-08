#include "juego_vida.h"

int main()
{
    cout << "===================================\n";
    cout << "         Juego de la Vida          \n";
    cout << "===================================\n";

    // Variables para almacenar información de entrada
    int filas, columnas, numBichos, ciclos;
    vector<Coordenada> bichos;

    // Solicitar al usuario que ingrese el número de filas
    cout << "Ingrese el número de filas (máximo 20): ";
    cin >> filas;

    // Verificar que el número de filas esté en el rango permitido
    if (filas <= 0 || filas > MAX_FILAS)
    {
        cout << "Número de filas no válido. Debe ser un valor entre 1 y " << MAX_FILAS << ".\n";
        return 1; // Terminar el programa con código de error
    }

    // Solicitar al usuario que ingrese el número de columnas
    cout << "Ingrese el número de columnas (máximo 20): ";
    cin >> columnas;

    // Verificar que el número de columnas esté en el rango permitido
    if (columnas <= 0 || columnas > MAX_COLUMNAS)
    {
        cout << "Número de columnas no válido. Debe ser un valor entre 1 y " << MAX_COLUMNAS << ".\n";
        return 1; // Terminar el programa con código de error
    }

    // Solicitar al usuario que ingrese el número de bichos y ciclos
    cout << "Ingrese el número de bichos: ";
    cin >> numBichos;

    // Verificar que el número de bichos no sea negativo ni mayor que el tamaño de la matriz
    if (numBichos < 1 || numBichos > filas * columnas)
    {
        cout << "Número de bichos no válido. Debe ser un valor entre 1 y " << filas * columnas << ".\n";
        return 1; // Terminar el programa con código de error
    }

    cout << "Ingrese el número de ciclos: ";
    cin >> ciclos;

    // Verificar que el número de ciclos sea un valor no negativo
    if (ciclos < 0)
    {
        cout << "Número de ciclos no válido. Debe ser un valor no negativo.\n";
        return 1; // Terminar el programa con código de error
    }

    // Redimensionar el vector de coordenadas para bichos y solicitar sus posiciones
    bichos.resize(numBichos);
    cout << "\nIngrese las coordenadas de los bichos (x y):\n";
    for (int i = 0; i < numBichos; ++i)
    {
        cout << "   Bicho " << i + 1 << ": ";
        cin >> bichos[i].x >> bichos[i].y;

        // Verificar que las coordenadas estén en el rango permitido
        if (bichos[i].x < 1 || bichos[i].x > filas || bichos[i].y < 1 || bichos[i].y > columnas)
        {
            cout << "Coordenadas no válidas. Deben estar en el rango (1-" << filas << ") para filas y (1-" << columnas << ") para columnas.\n";
            return 1; // Terminar el programa con código de error
        }

        // Ajustar las coordenadas proporcionadas por el usuario para que comiencen desde 1
        bichos[i].x -= 1;
        bichos[i].y -= 1;
    }

    // Inicializar una matriz para representar la población
    int poblacion[MAX_FILAS][MAX_COLUMNAS] = {0};

    // Llenar la población inicial con los bichos proporcionados
    inicializarPoblacion(poblacion, bichos);

    // Mostrar el estado inicial de la población
    cout << "\nEstado Inicial:\n";
    mostrarEstado(poblacion, filas, columnas);

    // Simular la evolución de la población durante el número de ciclos especificado
    simularCiclos(poblacion, filas, columnas, ciclos);

    return 0;
}
