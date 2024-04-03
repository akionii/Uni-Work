#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class Empleado
{
private:
    int ID;
    float salario;
    int horas;
    string nombre;

public:
    Empleado() : ID(0), salario(0.0), horas(0), nombre("") {}

    void setID(int puesto)
    {
        srand(static_cast<unsigned int>(time(NULL)));
        if (puesto == 0)
        {
            ID = 110000 + (rand() % 100000);
        }
        else if (puesto == 1)
        {
            ID = 55500 + (rand() % 10000);
        }
        else if (puesto == 2)
        {
            ID = 1000000 + (rand() % 1000000);
        }
    }

    void setSalario(float nuevoSalario) { salario = nuevoSalario; }
    void setHoras(int nuevasHoras) { horas = nuevasHoras; }
    void setNombre(string nuevoNombre) { nombre = nuevoNombre; }

    int getID() const { return ID; }
    float getSalario() const { return salario; }
    int getHoras() const { return horas; }
    string getNombre() const { return nombre; }
};

int main()
{
    Empleado empleados[50];

    for (int i = 0; i < 5; i++)
        empleados[i].setID(0);
    for (int i = 5; i < 8; i++)
        empleados[i].setID(1);
    for (int i = 8; i < 50; i++)
        empleados[i].setID(2);

    for (int i = 0; i < 50; i++)
    {
        cout << "Empleado " << i + 1 << " - ID: " << empleados[i].getID() << endl;
    }

    return 0;
}
