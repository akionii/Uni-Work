#pragma once
#include "Investigador.h"
#include "Profesor.h"

class PDI: virtual private Investigador, virtual public Profesor{
private:
Investigador investigador;

public:
    PDI();
    PDI(int id, string nombre, int edad, string institucionP, int anyioProf, string institucionInv, int anyioInv);
    int identificador;
    double getMediaAnnyiosExperiencia();
    void actualizacionInstitucion(string inst);
    virtual string toString();
    void getAreaDocencia();
    bool elMasVeterano(PDI *objPDI);
    PDI(const Profesor& otro);
    PDI& operator=(const Profesor& otro);

};  
