#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class CampoVectorial
{
protected:
    string nombre;

public:
    CampoVectorial();
    CampoVectorial(string nombre);
    virtual float calcularIntensidad(float *posicion) = 0;
    virtual float *calcularDireccion(float *posicion) = 0;
    string getNombre();
    static float dist(float *punto1, float *punto2);
    virtual string toString();
};