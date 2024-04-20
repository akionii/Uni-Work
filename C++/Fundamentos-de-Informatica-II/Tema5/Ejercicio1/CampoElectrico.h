#pragma once
#include "CampoVectorial.h"

class CampoElectrico : virtual public CampoVectorial
{
protected:
    float carga;
    float posicion[2];
    static float epsilon;

public:
    CampoElectrico();
    CampoElectrico(float carga, float *posicion, string nomrbe);
    float calcularIntensidad(float *posicion);
    float *calcularDireccion(float *posicion);
    float getCarga();
    void setCarga(float carga);
    virtual string toString();
};