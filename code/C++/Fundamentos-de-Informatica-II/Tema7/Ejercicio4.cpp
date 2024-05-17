#pragma once

#include <iostream>
#include <string>

using namespace std;

class Asignatura
{
public:
    string nombre;
    int cuatrimestre;
    float dificultad;

    Asignatura(){};
    Asignatura() : nombre(""), cuatrimestre(0), dificultad(0.0) {}

    Asignatura(const string &nombre, int cuatrimestre, float dificultad)
        : nombre(nombre), cuatrimestre(cuatrimestre), dificultad(dificultad) {}
};

string *crearArregloDeStrings(int tamano)
{
    return new string[tamano];
}

int *crearArregloDeEnteros(int tamano)
{
    return new int[tamano];
}

float *crearArregloDeFlotantes(int tamano)
{
    return new float[tamano];
}

Asignatura *crearArregloDeAsignaturas(int tamano)
{
    return new Asignatura[tamano];
}

int main()
{
    int tamano = 5;

    string *nombres = crearArregloDeStrings(tamano);
    int *cuatrimestres = crearArregloDeEnteros(tamano);
    float *dificultades = crearArregloDeFlotantes(tamano);

    nombres[0] = "Matemáticas";
    nombres[1] = "Física";
    nombres[2] = "Química";
    nombres[3] = "Historia";
    nombres[4] = "Literatura";

    cuatrimestres[0] = 1;
    cuatrimestres[1] = 2;
    cuatrimestres[2] = 2;
    cuatrimestres[3] = 1;
    cuatrimestres[4] = 3;

    dificultades[0] = 3.5;
    dificultades[1] = 4.0;
    dificultades[2] = 3.8;
    dificultades[3] = 2.5;
    dificultades[4] = 3.0;

    Asignatura *asignaturas = crearArregloDeAsignaturas(tamano);

    for (int i = 0; i < tamano; ++i)
    {
        asignaturas[i] = Asignatura(nombres[i], cuatrimestres[i], dificultades[i]);
    }

    for (int i = 0; i < tamano; ++i)
    {
        cout << "Asignatura: " << asignaturas[i].nombre
             << ", Cuatrimestre: " << asignaturas[i].cuatrimestre
             << ", Dificultad: " << asignaturas[i].dificultad << endl;
    }

    delete[] nombres;
    delete[] cuatrimestres;
    delete[] dificultades;
    delete[] asignaturas;

    return 0;
}
