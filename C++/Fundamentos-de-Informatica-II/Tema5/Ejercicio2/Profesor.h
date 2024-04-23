#pragma once
#include <iostream>
#include <string>
using namespace std;

struct datosPersonales {
    string DNI;
    string m_Nombre;
    string apellidos;
    int edad;
};

class Profesor {
private:
    datosPersonales m_Datos;
    int m_AnyioInicio;
protected:
    string m_Institucion;

public:
    Profesor() = default;
    Profesor(string DNI, string m_Nombre, string apellidos, int edad, string institucion, int anyioInicio);

    virtual string getAreaDocencia() = 0;
    int getAnyosExperiencia() const;
    virtual string toString() const;

};