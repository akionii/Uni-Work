#include "Persona.h"
#include "Cuenta.h"
#include "Cliente.h"
#include <iostream>

int main()
{
    Persona persona1("Juan Pérez", "12345678A");
    cout << persona1.toString() << endl;

    Cuenta cuenta1("000111222", 1000.50f);
    cout << cuenta1.toString() << endl;

    Cliente cliente1(persona1, cuenta1);
    cout << cliente1.toString() << endl;

    Cuenta cuentaActualizada = cliente1.getCuenta() + 500.0f;
    cliente1.setCuenta(cuentaActualizada);
    cout << "Después del depósito: " << cliente1.getCuenta().toString() << endl;

    Persona persona2("María López", "12345678A");
    if (persona1 == persona2)
    {
        cout << "Ambos clientes tienen el mismo DNI." << endl;
    }
    else
    {
        cout << "Los clientes tienen DNIs diferentes." << endl;
    }

    Cuenta cuenta2("000111333", 2000.75f);
    if (cuenta1 < cuenta2)
    {
        cout << "La Cuenta1 tiene menos dinero que la Cuenta2." << endl;
    }
    else
    {
        cout << "La Cuenta1 tiene más dinero que la Cuenta2." << endl;
    }

    return 0;
}
