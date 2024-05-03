#include<iostream>

using namespace std;

class Entero {
    public:
        static double factor_tolerancia;
};

class Flotante {
    public:
        static double factor_tolerancia;
};

double Entero::factor_tolerancia = 0.5;
double Flotante::factor_tolerancia = 0.5;


template <typename T> void imprimirFactorTolerancia() {
    cout << "El doble del factor de tolerancia es: " << 2 * T::factor_tolerancia << endl;
    cout << "La mitad del factor de tolerancia es: " << 0.5 * T::factor_tolerancia << endl;
}

int main() {
    cout << "Para la clase Entero:" << endl;
    imprimirFactorTolerancia<Entero>();

    cout << "\nPara la clase Flotante:" << endl;
    imprimirFactorTolerancia<Flotante>();

    return 0;
}
