#include "Cliente.h"

Cliente::Cliente() {}

Cliente::Cliente(const string &nombre, const string &DNI, const Cuenta &cuenta)
    : Persona(nombre, DNI), cuenta(cuenta) {}

Cliente::Cliente(const Persona &persona, const Cuenta &cuenta)
    : Persona(persona), cuenta(cuenta) {}

Cuenta Cliente::getCuenta() { return cuenta; }
void Cliente::setCuenta(const Cuenta &cuenta) { this->cuenta = cuenta; }

string Cliente::toString()
{
    return "Objeto Cliente: " + getNombre() + ", " + getDNI() + ", " + cuenta.toString();
}