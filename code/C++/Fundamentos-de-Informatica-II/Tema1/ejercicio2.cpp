#include <iostream>

using namespace std;

void ejercicio2(int e7, double& rd7, long l1) {
    rd7 = (e7 * l1) / rd7;
}

int main() {
    int a = 10;
    double b = 8.1;
    long c = 6;
    ejercicio2(a, b, c);
    cout << "El valor de b después de ejecutar la función es: " << b << endl;
    return 0;
}

