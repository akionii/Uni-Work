#include "Investigador.h"

Investigador::Investigador(int orcid, int anyioInicio, string areaConocimiento, string institucion): orcid(orcid), anyioInicio(anyioInicio), areaConocimiento(areaConocimiento), institucion(institucion){

}

int Investigador:: getAnyosExperiencia(){
    int anyioActual = 2024;
    return anyioActual - anyioInicio;

}

string Investigador::toString(){
    string salida = "El código es: " + to_string(orcid) + ", empezó en el anyio " + to_string(anyioInicio) + 
  ", su area es " + areaConocimiento + " y su institucion " + institucion;
    return salida;
} 

Investigador Investigador::operator=(const Investigador& otro){
    this->orcid = otro.orcid;
    this->anyioInicio = otro.anyioInicio;
    this->areaConocimiento = otro.areaConocimiento;
    this->institucion = otro.institucion;

    return *this;
}