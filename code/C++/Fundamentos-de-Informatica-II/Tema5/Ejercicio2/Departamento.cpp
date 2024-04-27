#include "Departamento.h"

Departamento::Departamento(string m_Nombre, int numMax)
    : m_Nombre(m_Nombre), m_NumMax(numMax), siguentePos{ 0 }
{
    PDIs = new PDI[numMax];
}

string Departamento::getNombre() const {
    return m_Nombre;
}

int Departamento::getNumMax() const {
    return m_NumMax;
}

void Departamento::setNombre(string m_Nombre) {
    m_Nombre = m_Nombre;
}

void Departamento::setNumMax(int numMax) {
    m_NumMax = numMax;
}

void Departamento::insertar(PDI& pdi) 
{
    if (siguentePos < m_NumMax) {
        PDIs[siguentePos] = pdi;
        siguentePos++;
    }
    else {
        cout << "No hay espacio en el departamento para el PDI identificador " << pdi.m_Identificador << endl;
    }
}

void Departamento::visualizar() {
    cout << "Nombre del departamento: " << m_Nombre << endl;
    cout << "Profesores Investigadores:" << endl;
    for (int i = 0; i < siguentePos; ++i) {
        cout << "PDI " << i + 1 << ":" << endl;
        cout << PDIs[i].toString() << endl;
    }
}

int Departamento::getNumPDI() const
{
    return siguentePos;
}
