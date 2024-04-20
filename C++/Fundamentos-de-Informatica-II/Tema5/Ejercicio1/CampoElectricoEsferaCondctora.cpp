#include "CampoElectricoEsferaConductora.h"

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora()
{
    radio_esfera = 1.0;
}

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora(float radio_esfera, float carga, float *posicion, string nombre)
{
    this->radio_esfera = radio_esfera;
    this->posicion[0] = posicion[0];
    this->posicion[1] = posicion[1];
    this->carga = carga;
    this->nombre = nombre;
}

void CampoElectricoEsferaConductora::calcularIntensidad(float *posicion)
{
}

float *CampoElectricoEsferaConductora::calcularCampo(float *posicion)
{
}

string CampoElectricoEsferaConductora::toString()
{
}
