#include "Profesor.h"

Profesor::Profesor(string DNI, string m_Nombre, string apellidos, int edad, string institucion, int anyioInicio) 
    : m_Datos{ DNI, m_Nombre, apellidos, edad }, 
      m_Institucion{ institucion }, 
      m_AnyioInicio{ anyioInicio } {;
}

int Profesor::getAnyosExperiencia() const
{
    return 2024 - m_AnyioInicio;
}

string Profesor::toString() const 
{
    return "DNI: " + m_Datos.DNI + " | Nombre: " + m_Datos.m_Nombre +
        " | Apellidos " + m_Datos.apellidos + " | Edad: " + to_string(m_Datos.edad) +
        "\nInstitucion: " + m_Institucion + " | Inicio: " + to_string(m_AnyioInicio);
}