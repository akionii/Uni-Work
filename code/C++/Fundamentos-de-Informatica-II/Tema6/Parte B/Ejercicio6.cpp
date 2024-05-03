#include <iostream>

using namespace std;

class NumeroEntero
{
public:
    static double umbral;
};

class NumeroDecimal
{
public:
    static double umbral;
};

double NumeroEntero::umbral = 0.5;
double NumeroDecimal::umbral = 0.5;

template <typename T>
void mostrarUmbrales()
{
    cout << "Doble del umbral: " << 2 * T::umbral << endl;
    cout << "Mitad del umbral: " << 0.5 * T::umbral << endl;
}

int main()
{
    cout << "Para NumeroEntero:" << endl;
    mostrarUmbrales<NumeroEntero>();

    cout << "\nPara NumeroDecimal:" << endl;
    mostrarUmbrales<NumeroDecimal>();

    return 0;
}
