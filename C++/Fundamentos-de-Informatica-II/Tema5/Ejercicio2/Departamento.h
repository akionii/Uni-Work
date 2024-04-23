#pragma once
#include "PDI.h"

class Departamento {
private:
    string m_Nombre;
    int m_NumMax;
    PDI* PDIs;
    int siguentePos;

public:
    Departamento(string m_Nombre, int numMax);
    string getNombre() const;
    int getNumMax() const;
    void setNombre(string m_Nombre);
    void setNumMax(int numMax);
    void insertar(PDI& pdi);
    void visualizar();

    int getNumPDI() const;
};

