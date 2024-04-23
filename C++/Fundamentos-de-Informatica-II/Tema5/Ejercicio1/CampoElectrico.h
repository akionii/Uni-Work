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
    CampoElectrico(float carga, float *posicion, string nombre);
    float calcularIntensidad(float *posicion) override;
    float *calcularDireccion(float *posicion) override;
    float getCarga();
    void setCarga(float carga);
    virtual string toString();
};