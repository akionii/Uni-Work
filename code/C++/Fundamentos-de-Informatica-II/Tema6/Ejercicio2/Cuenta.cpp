#include "Cuenta.h"

Cuenta::Cuenta() : numero(""), saldo(0.0f) {}

Cuenta::Cuenta(const string &numero, float saldo) : numero(numero), saldo(saldo) {}

string Cuenta::getNumero() { return numero; }
void Cuenta::setNumero(const string &numero) { this->numero = numero; }

float Cuenta::getSaldo() { return saldo; }
void Cuenta::setSaldo(float saldo) { this->saldo = saldo; }

bool Cuenta::operator<(const Cuenta &otra)
{
    return saldo < otra.saldo;
}

Cuenta Cuenta::operator+(float monto)
{
    return Cuenta(numero, saldo + monto);
}

string Cuenta::toString()
{
    return "Objeto Cuenta: " + numero + ", " + to_string(saldo);
}
