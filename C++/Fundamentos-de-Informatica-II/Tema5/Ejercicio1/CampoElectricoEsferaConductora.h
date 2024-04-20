#pragma once
#include "CampoElectrico.h"

class CampoElectricoEsferaConductora : public CampoElectrico
{
private:
    float radio_esfera;

public:
    CampoElectricoEsferaConductora();
    CampoElectricoEsferaConductora(float radio_esfera, float carga, float *posicion, string nombre);
    void calcularIntensidad(float *posicion);
    float *calcularCampo(float *posicion);
    virtual string toString();
};