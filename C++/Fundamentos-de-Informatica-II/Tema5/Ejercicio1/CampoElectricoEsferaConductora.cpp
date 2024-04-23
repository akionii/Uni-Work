#include "CampoElectricoEsferaConductora.h"

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora()
{
    radio_esfera = 1.0;
}

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora(float radio_esfera, float carga, float *posicion, string nombre)
{
    this->radio_esfera = radio_esfera;
    this->carga = carga;
    this->posicion[0] = posicion[0];
    this->posicion[1] = posicion[1];
    this->nombre = nombre;
}

float CampoElectricoEsferaConductora::calcularIntensidad(float *posicion)
{
    float distancia = dist(this->posicion, posicion);
    if (distancia <= radio_esfera)
    {
        return 0.0;
    }
    else
    {
        return CampoElectrico::calcularIntensidad(posicion);
    }
}

float *CampoElectricoEsferaConductora::calcularCampo(float *posicion)
{
    float *campo = new float[2];
    float distancia = dist(this->posicion, posicion);

    if (distancia < radio_esfera)
    {
        campo[0] = 0.0;
        campo[1] = 0.0;
    }
    else
    {
        float *direccion = CampoElectrico::calcularDireccion(posicion);
        campo[0] = direccion[0];
        campo[1] = direccion[1];
    }

    return campo;
}

string CampoElectricoEsferaConductora::toString()
{
    return CampoElectrico::toString() + ", radio_esfera: " + to_string(radio_esfera);
}
