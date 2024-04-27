#ifndef JUEGO_VIDA_H
#define JUEGO_VIDA_H

#include <iostream>
#include <vector>

using namespace std;

// Estructura para almacenar coordenadas
struct Coordenada
{
    int x, y;
};

// Definir los valores máximos para filas y columnas
const int MAX_FILAS = 20;
const int MAX_COLUMNAS = 20;

// Inicializa la población en función de las coordenadas de los bichos proporcionadas
void inicializarPoblacion(int poblacion[MAX_FILAS][MAX_COLUMNAS], const vector<Coordenada> &bichos);

// Muestra el estado actual de la población en la consola
void mostrarEstado(int poblacion[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas);

// Cuenta el número de bichos vecinos a una posición dada (considerando la matriz como circular)
int contarVecinos(int poblacion[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int fila, int columna);

// Aplica las reglas del juego y devuelve el nuevo estado de una celda
int aplicarReglas(int estadoActual, int vecinos);

// Simula la evolución de la población durante el número de ciclos especificado
void simularCiclos(int poblacion[MAX_FILAS][MAX_COLUMNAS], int filas, int columnas, int ciclos);

#endif
