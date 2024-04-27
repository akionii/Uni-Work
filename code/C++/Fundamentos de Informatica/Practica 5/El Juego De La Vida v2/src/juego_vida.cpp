#include "juego_vida.h"

// Inicializa la población en función de las coordenadas de los bichos proporcionadas
void inicializarPoblacion(int poblacion[MAX_FILAS][MAX_COLUMNAS], const vector<Coordenada> &bichos)
{
    // Coloca bichos en las posiciones especificadas
    for (const Coordenada &coord : bichos)
    {
        poblacion[coord.x][coord.y] = 1; // Bicho presente en la posición especificada
    }
}

// Muestra el estado actual de la población en la consola
void mostrarEstado(int poblacion[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas)
{
    // Imprime línea superior del tablero
    cout << '+' << string(columnas * 3, '.') << "+\n";

    // Imprime el contenido de cada celda
    for (int i = 0; i < filas; ++i)
    {
        cout << '|';
        for (int j = 0; j < columnas; ++j)
        {
            // Utiliza '*' para representar celdas con bichos y ' ' para celdas vacías
            cout << (poblacion[i][j] ? " * " : "   ");
        }
        cout << "|\n";
    }

    // Imprime línea inferior del tablero
    cout << '+' << string(columnas * 3, '-') << "+\n";
}

// Función para obtener la coordenada ajustada considerando la matriz como circular
int ajustarCoordenada(int coord, int tamaño)
{
    if (coord < 0)
    {
        return tamaño - 1;
    }
    else if (coord >= tamaño)
    {
        return 0;
    }
    return coord;
}

// Cuenta el número de bichos vecinos a una posición dada (considerando la matriz como circular)
int contarVecinos(int poblacion[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int fila, int columna)
{
    int vecinos = 0;

    // Itera sobre las celdas vecinas (considerando la matriz como circular)
    for (int i = fila - 1; i <= fila + 1; i++)
    {
        for (int j = columna - 1; j <= columna + 1; j++)
        {
            // Ajusta las coordenadas para considerar la matriz como circular
            int filaAjust = ajustarCoordenada(i, filas);
            int columnaAjustada = ajustarCoordenada(j, columnas);
            // Suma el valor de la celda vecina
            vecinos += poblacion[filaAjust][columnaAjustada];
        }
    }

    // Resta el valor actual para evitar contar la celda actual dos veces
    return vecinos - poblacion[fila][columna];
}

// Aplica las reglas del juego y devuelve el nuevo estado de una celda
int aplicarReglas(int estadoActual, int vecinos)
{
    // Reglas para celdas con bichos
    return (estadoActual == 1) ? (vecinos == 2 || vecinos == 3) : (vecinos == 2 || vecinos == 3);
}

// Simula la evolución de la población durante el número de ciclos especificado
void simularCiclos(int poblacion[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int ciclos)
{
    int poblacionTemp[MAX_FILAS][MAX_COLUMNAS];

    // Itera sobre el número de ciclos especificado
    for (int ciclo = 1; ciclo <= ciclos; ++ciclo)
    {
        // Calcula el nuevo estado para cada celda
        for (int i = 0; i < filas; ++i)
        {
            for (int j = 0; j < columnas; ++j)
            {
                int vecinos = contarVecinos(poblacion, filas, columnas, i, j);
                poblacionTemp[i][j] = aplicarReglas(poblacion[i][j], vecinos);
            }
        }

        // Actualiza la población con el nuevo estado
        for (int i = 0; i < filas; ++i)
        {
            for (int j = 0; j < columnas; ++j)
            {
                poblacion[i][j] = poblacionTemp[i][j];
            }
        }

        // Muestra el estado después de cada ciclo
        cout << "Ciclo " << ciclo << ":\n";
        mostrarEstado(poblacion, filas, columnas);
    }
}
