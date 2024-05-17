#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Asignatura {
    public:
    
    string nombre;
    int dificultad;

    Asignatura(string nombre, int dificultad);

    void mostrar() const;

};

Asignatura::Asignatura(string nombre, int dificultad): nombre(nombre), dificultad(dificultad) {}

void Asignatura::mostrar() const {
    cout << "Asignatura: " << nombre << ",Dificultad: " << dificultad << endl;
}

int main () {
   
    vector<Asignatura>PrimerAnioSegundoCuatrimestre = {
        Asignatura("Matematicas 2", 5),
        Asignatura("Fisica 2", 6),
        Asignatura("Quimica 2", 5),
        Asignatura("Historia 2", 4),
        Asignatura("Ingles 2", 3)

    };

    vector<Asignatura>SegundoAnioSegundoCuatrimestre = {
        Asignatura("Matimaticas 4", 7),
        Asignatura("Fisica 4", 8),
        Asignatura("Quimica 4", 7),
        Asignatura("Historia 4", 6),
        Asignatura("Ingles 4", 5)
    };

    vector<vector<Asignatura>> Principal = {
        PrimerAnioSegundoCuatrimestre,
        SegundoAnioSegundoCuatrimestre
    };

    for(int i = 0; i < Principal.size(); i++){
        for(int j = 0; i < Principal[i].size(); j++){
                Principal[i][j].dificultad += 1;
        }
    }

    for(int i = 0; i < Principal.size(); i++){
        cout << "Contenedor " << i + 1 << endl; 
        for(int j = 0; j < Principal[i].size(); j++) {
            Principal[i][j].mostrar();
        }
    }
    return 0;
}