#include "Departamento.h"

Departamento::Departamento(string& nombre, int numMax) : nombre(nombre), numMax(numMax) {

}

string Departamento::getNombre(){
    return nombre;
}
int Departamento::getNumMax(){
    return numMax;
}

void Departamento::setNombre(string nombre){
this->nombre = nombre;

}

void Departamento::setNumMax(int numMax){
this->numMax=numMax;

}

void Departamento::insertar(PDI &pdi){
if (primeraPosicionLibre < numMax) {
        pdis[primeraPosicionLibre] = pdi;
        primeraPosicionLibre++;
    } else {
        cout << "No hay espacio en el departamento para el PDI identificador " << pdi.identificador << endl;
    }
}


void Departamento::visualizar(){
    cout << "Nombre del departamento: " << nombre << endl;
    cout << "Profesores Investigadores:" << endl;
    for (int i = 0; i < primeraPosicionLibre; ++i) {
        cout << "PDI " << i + 1 << ":" << endl;
        cout << pdis[i].toString() << endl;
    }
}