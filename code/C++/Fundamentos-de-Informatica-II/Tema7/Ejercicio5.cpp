#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Asignatura {
    public:
   
    string nombre;
    int cuatrimestre;
    int dificultad;

    Asignatura(string nombre, int cuatri, int dificultad);
    void mostrar() const;

};

Asignatura::Asignatura(string nombre, int cuatri, int dificultad) : nombre(nombre), cuatrimestre(cuatri), dificultad(dificultad) {}

void Asignatura::mostrar() const {
    cout << "Asignatura: " << nombre << ",Cuatrimestre: " << cuatrimestre << ",Dificultad: " << dificultad << endl;
}

int main () {
    vector<Asignatura> contenedor1 = {
        Asignatura("Matematicas II", 2, 5),
        Asignatura("Fisica II", 2, 6),
        Asignatura("Quimica II", 2, 5),
        Asignatura("Historia II", 2, 4),
        Asignatura("Ingles II", 2, 3)
    };

    vector<Asignatura> contenedor2 = {
        Asignatura("Matematicas IV", 4, 7),
        Asignatura("Fisica IV", 4, 8),
        Asignatura("Quimica IV", 4, 7),
        Asignatura("Historia IV", 4, 6),
        Asignatura("Ingles IV", 4, 5)
    };

    sort(contenedor1.begin(), contenedor1.end(), [](const Asignatura& a, const Asignatura& b) {
        return a.cuatrimestre < b.cuatrimestre;
    });

    sort(contenedor2.begin(), contenedor2.end(), [](const Asignatura& a , const Asignatura& b) {
        return a.dificultad < b.dificultad;
    });

    cout << "Contenedor 1 ordenado por cuatri: " << endl;
    for(const auto& asignatura: contenedor1) {
        asignatura.mostrar();
    }

    cout << "Contenedor 2 ordenado por dificultad " << endl;
    for(const auto& asignatura : contenedor2) {
        asignatura.mostrar();
    }

    return 0;
}