#include <iostream>
#include <string>

using namespace std;

template <typename T>
void mostrarCadena(const T &objeto)
{
    cout << "Representación del objeto: " << objeto.toString() << endl;
}

class ClaseA
{
public:
    string toString() const
    {
        return "Instancia de ClaseA";
    }
};

class ClaseB
{
public:
    string toString() const
    {
        return "Instancia de ClaseB";
    }
};

int main()
{
    ClaseA instanciaA;
    ClaseB instanciaB;

    mostrarCadena(instanciaA);
    mostrarCadena(instanciaB);

    return 0;
}
