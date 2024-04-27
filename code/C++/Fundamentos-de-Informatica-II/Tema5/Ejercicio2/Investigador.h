#pragma once
#include <string>
#include <iostream>

using namespace std;

class Investigador {

public:
    Investigador() = default;
    Investigador(int m_ORCID, string m_AreaConocimiento, string m_Institucion, int m_AnyioInicio);

    Investigador(const Investigador& otro);
    Investigador operator=(const Investigador& otro);

    virtual string getAreaInvestigacion() const;
    int getAnyosExperiencia() const;
    virtual string toString() const;

private:
    int m_ORCID;
    int m_AnyioInicio;
    string m_AreaConocimiento;

protected:
    string m_Institucion;
};