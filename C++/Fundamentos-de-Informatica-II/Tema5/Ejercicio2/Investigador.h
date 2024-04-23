#pragma once
#include <iostream>
using namespace std;

class Investigador{
private:
    int orcid;
    int anyioInicio;
    string areaConocimiento;

protected:
    string institucion;

public:
    Investigador();
    Investigador(int orcid, int anyioInicio, string areaConocimiento, string institucion);
    virtual string getAreaInvestigacion();
    int getAnyosExperiencia();
    virtual string toString();
    Investigador(const Investigador &otro);
    Investigador operator=(const Investigador& otro);
    


};