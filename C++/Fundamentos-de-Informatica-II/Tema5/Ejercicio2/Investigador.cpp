#include "Investigador.h"

Investigador::Investigador(int ORCID, string m_AreaConocimiento, string m_Institucion, int m_AnyioInicio)
    : m_ORCID{ ORCID }, 
      m_AreaConocimiento{ m_AreaConocimiento }, 
      m_Institucion{ m_Institucion },
      m_AnyioInicio{ m_AnyioInicio }
{}

Investigador::Investigador(const Investigador& otro)
{
    //....
}

Investigador Investigador::operator=(const Investigador& otro) 
{
    m_ORCID = otro.m_ORCID;
    m_AnyioInicio = otro.m_AnyioInicio;
    m_AreaConocimiento = otro.m_AreaConocimiento;
    m_Institucion = otro.m_Institucion;

    return *this;
}

string Investigador::getAreaInvestigacion() const
{
    return m_AreaConocimiento;
}

int Investigador::getAnyosExperiencia() const
{
    return 2024 - m_AnyioInicio;
}

string Investigador::toString() const
{
    return "Institucion: " + m_Institucion + " | Inicio: " + to_string(m_AnyioInicio) + " | ORCID: " + to_string(m_ORCID) + " | Area De Investigacion: " + m_AreaConocimiento;
}


