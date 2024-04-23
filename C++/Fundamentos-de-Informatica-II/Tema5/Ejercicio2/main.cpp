#include <iostream>
#include "PDI.h"
#include "Departamento.h"


using namespace std;

static string getDepartamentoMasGrande(Departamento* di, Departamento* d2) {
    if (di->getNumPDI() > d2->getNumPDI()) {
        return di->getNombre();
    }
    else if (di->getNumPDI() < d2->getNumPDI()) {
        return d2->getNombre();
    }
    else {
        return "Mismo n�mero de PDI";
    }
}

int main() {
	
    // Crear objetos PDI y mostrar caracter�sticas
    PDI pdi1("12345678","Federico","Perez",60,"Departamento programacion",1995,1234,"Rust","Laboratorio",1997,1);
    PDI pdi2("87654321","Fran","Garcia",40,"Departamento fisica",2002,2345,"Fisica teorica","Instituto de fisica",2010,2);

    PDI* pdi3 = new PDI("96374185", "Leo", "Ruiz", 25, "Departamento filosofia", 2010, 3456, "Platon", "Parlamento filosofia", 2016, 3);
    PDI* pdi4 = new PDI("74196325", "Alex", "Taylor", 75, "Medicina", 1970, 4567, "Vision", "Hospital universitario", 1990, 4);
    
    cout << "Caracteristicas de pdi1:\n" << pdi1.toString() << "\n\n";
    cout << "Caracteristicas de pdi2:\n" << pdi2.toString() << "\n\n";
    cout << "Caracteristicas de pdi3:\n" << pdi3->toString() << "\n\n";
    cout << "Caracteristicas de pdi4:\n" << pdi4->toString() << "\n\n";
    
    // Comprobar si pdi1 es mas veterano que pdi2
    cout << "Es pdi1 mas veterano que pdi2 ";
    if (pdi1.elMasVeterano(&pdi2)) {
        cout << "Si\n";
    } else {
        cout << "No\n";
    }
    
    // Comprobar si pdi2 es m�s veterano que pdi3
    cout << "Es pdi2 mas veterano que pdi3 ";
    if (pdi2.elMasVeterano(pdi3)) {
        cout << "Si\n";
    } else {
        cout << "No\n";
    }
    
    // Crear un objeto de tipo Departamento y a�adir los PDIs
    
    Departamento departamentoMetodosCuantitativos("Metodos Cuantitativos", 3);
    
    departamentoMetodosCuantitativos.insertar(pdi1);
    departamentoMetodosCuantitativos.insertar(pdi2);
    departamentoMetodosCuantitativos.insertar(*pdi3);
    departamentoMetodosCuantitativos.insertar(*pdi4);
    
    // Mostrar la informaci�n del departamento
    departamentoMetodosCuantitativos.visualizar();
    cout << "\n\n";
    
    // Crear un puntero a Departamento y a�adir los PDIs
    Departamento* departamentoInformatica = new Departamento("Ing. Informatica", 4);
    departamentoInformatica->insertar(pdi1);
    departamentoInformatica->insertar(pdi2);
    departamentoInformatica->insertar(*pdi3);
    departamentoInformatica->insertar(*pdi4);
    
    // Mostrar la informaci�n del departamento
    departamentoInformatica->visualizar();
    cout << "\n\n";
    
    // Definir y probar el m�todo getDepartamentoMasGrande
    
    
    cout << "El departamento mas grande es: " << getDepartamentoMasGrande(&departamentoMetodosCuantitativos, departamentoInformatica) << "\n";
    
    // Liberar memoria del puntero a Departamento y de los PDIs
    delete pdi3;
    delete pdi4;
    delete departamentoInformatica;
}