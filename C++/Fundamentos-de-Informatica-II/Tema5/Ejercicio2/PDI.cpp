#include "PDI.h"
#include "Investigador.h"   
#include "Profesor.h"

//Mirar primera descripcion del PDI

double PDI:: getMediaAnnyiosExperiencia(){
    double Total = Profesor::getAnyiosExperiencia() + Investigador::getAnyosExperiencia();

    return Total/2;
}

void PDI::actualizacionInstitucion(string inst){
    Profesor::institucion = inst;
    Investigador::institucion = inst;
}


void PDI::getAreaDocencia(){
    string area;
    cout << "Introduce la docencia: ";
    cin >> area;
    cout << "Area de Docencia: " << area << "\n";
}

bool PDI::elMasVeterano(PDI *objPDI){
    double mediaActual = getMediaAnnyiosExperiencia();
    double mediaOtro = objPDI->getMediaAnnyiosExperiencia();

    if(mediaActual > mediaOtro){
        return true;
    } else if(mediaActual==mediaOtro){
        return getAnyosExperiencia() > objPDI->getAnyosExperiencia();//mirar
    } else {
        return false;
    }
}

string PDI::toString(){
    string salida = Profesor::toString() + "\n" + Investigador::toString();
    return salida;
}

//PDI& PDI::operator=(const Profesor& otro) {
//    Profesor::operator=(otro);
//    this->
//    return *this;
//}