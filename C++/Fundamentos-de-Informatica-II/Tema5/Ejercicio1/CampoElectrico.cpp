#include "CampoElectrico.h"
#include <cmath>
#include <limits>

float CampoElectrico::epsilon = 1;

CampoElectrico::CampoElectrico()
{
    carga = 2.0;
    posicion[0] = 1;
    posicion[1] = 1;
    nombre = "CampoElectrico0";
}

CampoElectrico::CampoElectrico(float carga, float *posicion, string nombre)
{
    this->carga = carga;
    this->posicion[0] = posicion[0];
    this->posicion[1] = posicion[1];
    this->nombre = nombre;
}

float CampoElectrico::calcularIntensidad(float *posicion)
{
    float k = 1 / (4 * M_PI * epsilon);
    float dx = this->posicion[0] - posicion[0];
    float dy = this->posicion[1] - posicion[1];
    float distancia = sqrt(dx * dx + dy * dy);

    return carga / (k * distancia * distancia);
}

float *CampoElectrico::calcularDireccion(float *posicion)
{
    static float direccion[2];
    float dx = posicion[0] - this->posicion[0];
    float dy = posicion[1] - this->posicion[1];
    float distancia = sqrt(dx * dx + dy * dy);

    direccion[0] = dx / distancia;
    direccion[1] = dy / distancia;

    return direccion;
}

float CampoElectrico::getCarga()
{
    return carga;
}

void CampoElectrico::setCarga(float carga)
{
    this->carga = carga;
}

string CampoElectrico::toString()
{
    return "Campo eléctrico: " + nombre + ", carga: " + to_string(carga) + ", posición: (" + to_string(posicion[0]) + ", " + to_string(posicion[1]) + ")";
}
