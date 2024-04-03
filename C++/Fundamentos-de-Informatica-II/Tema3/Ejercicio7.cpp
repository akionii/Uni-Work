#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    int id;
    float salario;
    int horasTrabajoPorSemana;

public:
    Empleado(int id, float salario, int horas) : id(id), salario(salario), horasTrabajoPorSemana(horas) {}

    void setID(int nuevoID) { id = nuevoID; }
    int getID() const { return id; }

    void setSalario(float nuevoSalario) { salario = nuevoSalario; }
    float getSalario() const { return salario; }

    void setHorasTrabajoPorSemana(int horas) { horasTrabajoPorSemana = horas; }
    int getHorasTrabajoPorSemana() const { return horasTrabajoPorSemana; }

    void mostrarDatos() const {
        cout << "ID: " << id << ", Salario: " << salario << ", Horas de trabajo por semana: " << horasTrabajoPorSemana << endl;
    }
};

// Ejemplo de uso de Empleado
int main() {
    Empleado empleado1(123, 30000.0, 40);
    empleado1.mostrarDatos();
    return 0;
}
