#pragma once
#include "Investigador.h"
#include "Profesor.h"

class PDI : public Profesor, private Investigador
{

public:
    PDI() = default;
    PDI(string DNI, string m_Nombre, string apellidos, int edad, string institucionProfesor, int anyioInicioProfesor, int orcid, string areaConocimiento, string institucionInvestigador, int anyioInicioInvestigador, int identificador);
    
    //PDI(const Profesor& otro);
    //PDI& operator=(const Profesor& otro);

    double getMediaAnyiosExperiencia() const;
    void actualizacionInstitucion(string inst);
    string getAreaDocencia();
    bool elMasVeterano(PDI* objPDI) const;
    virtual string toString() const;

private:
    Investigador m_Investigador;
public:
    int m_Identificador;
};

