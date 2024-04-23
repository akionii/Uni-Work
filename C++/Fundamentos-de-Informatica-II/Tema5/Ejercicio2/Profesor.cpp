#include "Profesor.h"

Profesor::Profesor(string dni, string nombre, string apellidos, int edad, string institucion) :
datos{dni, nombre, apellidos, edad}, institucion(institucion){
}

int Profesor::getAnyiosExperiencia(){
    int anyioActual = 2024;
    return anyioActual - anyioInicio;
}

string Profesor::toString(){
    string salida = "Dni: " + datos.dni + ", nombre: " + datos.nombre + 
    ", apellidos " + datos.apellidos + " edad: " + to_string(datos.edad) +
    " pertenece a " + institucion;
    return salida;
}