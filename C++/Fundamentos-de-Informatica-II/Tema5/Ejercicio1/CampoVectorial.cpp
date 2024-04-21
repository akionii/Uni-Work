#include "CampoVectorial.h"

CampoVectorial::CampoVectorial()
{
    nombre = "CampoVectorial0";
}

CampoVectorial::CampoVectorial(string nombre)
{
    this->nombre = nombre;
}

float CampoVectorial::calcularIntensidad(float posicion)
{
}

float *CampoVectorial::calcularDireccion(float posicion)
{
}

string CampoVectorial::getNombre()
{
    return nombre;
}

float CampoVectorial::dist(float *punto1, float *punto2)
{
    float distancia = 0.0;
    for (int i = 0; i < 2; i++)
    {
        distancia += pow(punto1[i] - punto2[i], 2);
    }
    return sqrt(distancia);
}

string CampoVectorial::toString()
{
    return "Campo vectorial: " + nombre;
}
