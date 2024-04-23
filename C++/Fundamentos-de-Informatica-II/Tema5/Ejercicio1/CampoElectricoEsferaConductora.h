#pragma once
#include "CampoElectrico.h"

class CampoElectricoEsferaConductora : virtual public CampoElectrico
{
private:
    float radio_esfera;

public:
    CampoElectricoEsferaConductora();
    CampoElectricoEsferaConductora(float radio_esfera, float carga, float *posicion, string nombre);
    float calcularIntensidad(float *posicion);
    float *calcularCampo(float *posicion);
    virtual string toString();
};