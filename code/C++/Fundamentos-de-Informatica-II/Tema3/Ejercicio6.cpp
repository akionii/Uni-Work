#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
    string nombre;

public:
    Persona(string nombre) : nombre(nombre) {}

    void dormir()
    {
        cout << "zzz zzz zzZ" << endl;
    }

    void hablar()
    {
        cout << "bla bla bla" << endl;
    }

    void contarHasta(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    void setNombre(string nuevoNombre)
    {
        nombre = nuevoNombre;
    }

    void decirNombre()
    {
        cout << "Mi nombre es " << nombre << endl;
    }
};

int main()
{
    Persona persona("Juan");
    persona.decirNombre();
    persona.dormir();
    persona.hablar();
    persona.contarHasta(10);
    persona.setNombre("Pedro");
    persona.decirNombre();

    return 0;
}
