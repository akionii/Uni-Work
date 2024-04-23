 #pragma once
 #include "PDI.h"

 class Departamento: public PDI{
    private:

    string nombre;
    int numMax;
    PDI *pdis;
    int primeraPosicionLibre;
   

    public:
    
    Departamento(string &nombre, int numMax);
    string getNombre();
    int getNumMax();
    void setNombre(string nombre);
    void setNumMax(int numMax);
    void insertar(PDI& pdi);
    void visualizar();
    



    
 };