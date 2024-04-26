#ifndef CUENTA_H
#define CUENTA_H

#include <string>
using namespace std;

class Cuenta
{
private:
    string numero;
    float saldo;

public:
    Cuenta();
    Cuenta(const string &numero, float saldo);

    string getNumero();
    void setNumero(const string &numero);

    float getSaldo();
    void setSaldo(float saldo);

    bool operator<(const Cuenta &otra);
    Cuenta operator+(float monto);

    string toString();
};

#endif