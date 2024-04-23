#include <iostream>
#include "PDI.h"
#include "Departamento.h"

using namespace std;

int main() {
    // Crear objetos PDI y mostrar características
    PDI pdil(1, "Cheng", 35, "Universidad Loyola", 2010, "Instituto de desarrollo", 2015);
    PDI pdi2(2, "Alex Taylor", 76, "Universidad CarlosIII", 2008, "Laboratorio IA", 2012);
    PDI* pdi3 = new PDI(3, "Aurelio", 38, "Universidad Chicago", 2005, "Laboratorio", 2010);
    PDI* pdi4 = new PDI(4, "Fede", 65, "Universidad Sevilla", 2000, "Centro de Investigacion", 2008);

    cout << "Características de pdil:\n" << pdil.toString() << "\n\n";
    cout << "Características de pdi2:\n" << pdi2.toString() << "\n\n";
    cout << "Características de pdi3:\n" << pdi3->toString() << "\n\n";
    cout << "Características de pdi4:\n" << pdi4->toString() << "\n\n";

    // Comprobar si pdil es más veterano que pdi2
    cout << "¿Es pdil más veterano que pdi2? ";
    if (pdil.elMasVeterano(&pdi2)) {
        cout << "Sí\n";
    } else {
        cout << "No\n";
    }

    // Comprobar si pdi2 es más veterano que pdi3
    cout << "¿Es pdi2 más veterano que pdi3? ";
    if (pdi2.elMasVeterano(pdi3)) {
        cout << "Sí\n";
    } else {
        cout << "No\n";
    }

    // Crear un objeto de tipo Departamento y añadir los PDIs
    
    Departamento departamentoMetodosCuantitativos("Métodos Cuantitativos", 3);
    
    departamentoMetodosCuantitativos.insertar(pdil);
    departamentoMetodosCuantitativos.insertar(pdi2);
    departamentoMetodosCuantitativos.insertar(*pdi3);
    departamentoMetodosCuantitativos.insertar(*pdi4);

    // Mostrar la información del departamento
    departamentoMetodosCuantitativos.visualizar();
    cout << "\n\n";

    // Crear un puntero a Departamento y añadir los PDIs
    Departamento* departamentoInformatica = new Departamento("Ing. Informática", 4);
    departamentoInformatica->insertar(pdil);
    departamentoInformatica->insertar(pdi2);
    departamentoInformatica->insertar(*pdi3);
    departamentoInformatica->insertar(*pdi4);

    // Mostrar la información del departamento
    departamentoInformatica->visualizar();
    cout << "\n\n";

    // Definir y probar el método getDepartamentoMasGrande
    string getDepartamentoMasGrande(Departamento* di, Departamento* d2){
        if (di->getCantidadPDIs() > d2->getCantidadPDIs()) {
            return di->getNombre();
        } else if (di->getCantidadPDIs() < d2->getCantidadPDIs()) {
            return d2->getNombre();
        } else {
            return "Mismo número de PDI";
        }
    }

    cout << "El departamento más grande es: " << getDepartamentoMasGrande(&departamentoMetodosCuantitativos, departamentoInformatica) << "\n";

    // Liberar memoria del puntero a Departamento y de los PDIs
    delete pdi3;
    delete pdi4;
    delete departamentoInformatica;

    return 0;
}
