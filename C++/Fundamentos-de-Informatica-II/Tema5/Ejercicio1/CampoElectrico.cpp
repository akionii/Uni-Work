#include "CampoElectrico.h"
float CampoElectrico::epsilon = 1;

CampoElectrico::CampoElectrico()
{
    carga = 2.0;
    posicion[0] = 1;
    posicion[1] = 1;
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
    double epsilon = 8.854e-12;
    float k = 4 * 3.1415 * epsilon;
    float distancia = dist(this->posicion, posicion);
    return 1.0 / (k * epsilon * distancia);
}

float *CampoElectrico::calcularDireccion(float *posicion)
{
    float *direccion = new float[2];
    float distancia = dist(this->posicion, posicion);
    direccion[0] = (posicion - this->posicion) / distancia; // eje x
    direccion[1] = (posicion - this->posicion) / distancia; // eje y

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
    return "Campo electrico: " + nombre + ", carga: " + to_string(carga) + ", posicion: (" + to_string(posicion[0]) + ", " + to_string(posicion[1]) + ")";
}
