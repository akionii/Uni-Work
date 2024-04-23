#include "PDI.h"
#include "Investigador.h"   
#include "Profesor.h"

PDI::PDI(string DNI, string m_Nombre, string apellidos, int edad, string institucionProfesor, int anyioInicioProfesor, int orcid, string areaConocimiento, string institucionInvestigador, int anyioInicioInvestigador, int identificador)
    : Profesor{ DNI, m_Nombre, apellidos, edad , institucionProfesor, anyioInicioProfesor },
      Investigador{ orcid, areaConocimiento, institucionInvestigador, anyioInicioInvestigador },
      m_Identificador{ identificador }
{
}

//PDI::PDI(const Profesor& otro)
//{
//}
//
//PDI& PDI::operator=(const Profesor& otro)
//{
//}

double PDI::getMediaAnyiosExperiencia() const {
    double suma = static_cast<double>(Profesor::getAnyosExperiencia() + Investigador::getAnyosExperiencia());
    return suma / 2;
}

void PDI::actualizacionInstitucion(string inst) {
    Profesor::m_Institucion = inst;
    Investigador::m_Institucion = inst;
}

string PDI::getAreaDocencia() {
    string area;
    cout << "Introduce la Docencia: ";
    cin >> area;
    return area;
}

bool PDI::elMasVeterano(PDI* objPDI) const {
    double mediaActual = getMediaAnyiosExperiencia();
    double mediaOtro = objPDI->getMediaAnyiosExperiencia();

    if (mediaActual > mediaOtro) {
        return true;
    }
    
    if (mediaActual == mediaOtro) {
        return Profesor::getAnyosExperiencia() > objPDI->Profesor::getAnyosExperiencia();
    }

    return false;
}

string PDI::toString() const {
    string salida = Profesor::toString() + "\n" + Investigador::toString();
    return salida;
}
