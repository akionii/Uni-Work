#include "CampoElectrico.h"

float CampoElectrico::epsilon = 8.854e-12;

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
    float k = 1 / (4 * 3.1415 * epsilon);
    float distancia = dist(this->posicion, posicion);

    return carga / (k * distancia * distancia);
}

float *CampoElectrico::calcularDireccion(float *posicion)
{
    static float direccion[2];
    float distancia = dist(this->posicion, posicion);
    direccion[0] = (posicion[0] - this->posicion[0]) / distancia; // ? eje x
    direccion[1] = (posicion[1] - this->posicion[1]) / distancia; // ? eje y

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
