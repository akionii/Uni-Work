#include<iostream>
#include<string>

using namespace std;

template < typename T> void imprimirToString(const T& objeto) {
    cout << "Desde la funcion plantilla: " << objeto.toString() << endl;
}

class A {
public:
    string toString() const {
        return "Objeto de la clase A";
    }
};

class B {
public:
    string toString() const {
        return "Objeto de la clase B";
    }
};

int main() {
    A objetoA;
    B objetoB;

    imprimirToString(objetoA);
    imprimirToString(objetoB);

    return 0;
}
