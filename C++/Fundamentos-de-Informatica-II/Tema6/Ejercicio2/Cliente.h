#include "Persona.h"
#include "Cuenta.h"

class Cliente : public Persona
{
private:
    Cuenta cuenta;

public:
    Cliente();
    Cliente(const string &nombre, const string &DNI, const Cuenta &cuenta);
    Cliente(const Persona &persona, const Cuenta &cuenta);
    Cuenta getCuenta();
    void setCuenta(const Cuenta &cuenta);
    string toString();
};
