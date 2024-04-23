#pragma once
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

class CampoVectorial
{
protected:
    string nombre;

public:
    CampoVectorial();
    CampoVectorial(string nombre);
    virtual float calcularIntensidad(float posicion);
    virtual float *calcularDireccion(float posicion);
    string getNombre();
    static float dist(float *punto1, float *punto2);
    virtual string toString();
};