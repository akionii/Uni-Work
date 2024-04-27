#include "CampoElectrico.h"
float CampoElectrico::epsilon = 1;

CampoElectrico::CampoElectrico(){
    carga = 2.0;
    posicion[0] = 1;
    posicion[1] = 1;
}

CampoElectrico::CampoElectrico(float carga, float *posicion, string nombre){
    this->carga = carga;
    this->posicion[0] = posicion[0];
    this->posicion[1] = posicion[1];
    this->nombre = nombre;
}

float CampoElectrico::calcularIntensidad(float *posicion){
     float k = 1 / (4 * 3.1416 * epsilon); 
    float dx = this->posicion[0] - posicion[0];
    float dy = this->posicion[1] - posicion[1];
    float distancia = sqrt(dx * dx + dy * dy);
  
  return carga / (k * distancia * distancia);
}

float *CampoElectrico::calcularDireccion(float *posicion){
    float *direccion = new float[2];
    float distancia = dist(this->posicion, posicion);
   direccion[0] = (posicion - this->posicion)/distancia; // eje x
   direccion[1] = (posicion - this->posicion)/distancia; // eje y
   
   return direccion;
}

float CampoElectrico::getCarga(){
    return carga;
}

void CampoElectrico::setCarga(float carga){
    this->carga = carga;
}

string CampoElectrico::toString(){
    return "Campo electrico: " + nombre + ", carga: " + to_string(carga) + ", posicion: (" + to_string(posicion[0]) + ", "
    + to_string(posicion[1]) + ")";
}






/*#include "CampoElectrico.h"
#include <cmath>  // For mathematical functions like sqrt
#include <limits> // For handling special numeric limits

float CampoElectrico::epsilon = 1; // Ensure epsilon is a realistic non-zero value unless explicitly testing

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
    float k = 1 / (4 * M_PI * epsilon); // Use M_PI for more accurate pi value
    float dx = this->posicion[0] - posicion[0];
    float dy = this->posicion[1] - posicion[1];
    float distancia = sqrt(dx * dx + dy * dy);

    if (distancia == 0 || epsilon == 0)
    {
        // Return infinity if distance is zero (implying point is at the charge's location) or epsilon is zero
        return numeric_limits<float>::infinity();
    }

    return carga / (k * distancia * distancia);
}

float *CampoElectrico::calcularDireccion(float *posicion)
{
    static float direccion[2];
    float dx = posicion[0] - this->posicion[0];
    float dy = posicion[1] - this->posicion[1];
    float distancia = sqrt(dx * dx + dy * dy);

    if (distancia == 0)
    {
        // Handle zero distance case, return NaN for direction
        direccion[0] = numeric_limits<float>::quiet_NaN();
        direccion[1] = numeric_limits<float>::quiet_NaN();
    }
    else
    {
        direccion[0] = dx / distancia;
        direccion[1] = dy / distancia;
    }

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
*/