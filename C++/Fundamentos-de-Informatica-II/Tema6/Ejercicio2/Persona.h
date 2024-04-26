#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona
{
private:
    string DNI;
    string nombre;

public:
    Persona();
    Persona(const string &nombre, const string &DNI);
    Persona(const Persona &otra);
    string getDNI();
    void setDNI(const string &dni);
    string getNombre();
    void setNombre(const string &nombre);
    bool operator==(const Persona &otra);
    string toString();
};

#endif