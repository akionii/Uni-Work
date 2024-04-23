#pragma once
#include <iostream>
using namespace std;

struct datosPersonales {
    string dni;
    string nombre;
    string apellidos;
    int edad;
};

class Profesor{
private:
    datosPersonales datos;
    int anyioInicio;

protected:
    string institucion;

public:
    Profesor(); 
    Profesor(string dni, string nombre, string apellidos, int edad, string institucion);
    virtual string getAreaDocencial();
    int getAnyiosExperiencia();
    virtual string toString();
    
};