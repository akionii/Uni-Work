#include "Persona.h"

Persona::Persona() : DNI(""), nombre("") {}

Persona::Persona(const string &nombre, const string &DNI) : nombre(nombre), DNI(DNI) {}

Persona::Persona(const Persona &otra) : DNI(otra.DNI), nombre(otra.nombre) {}

string Persona::getDNI() { return DNI; }
void Persona::setDNI(const string &dni) { DNI = dni; }

string Persona::getNombre() { return nombre; }
void Persona::setNombre(const string &nombre) { this->nombre = nombre; }

bool Persona::operator==(const Persona &otra)
{
    return DNI == otra.DNI;
}

string Persona::toString()
{
    return "Objeto Persona: " + nombre + ", " + DNI;
}