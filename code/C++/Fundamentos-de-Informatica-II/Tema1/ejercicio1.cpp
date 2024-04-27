#include <iostream>
#include <cmath> // Para usar M_PI

using namespace std;

void ejercicio1(float& r_f1) {
    r_f1 = r_f1 * M_PI / 180.0;
}

int main() {
    float f1 = 90;
    ejercicio1(f1);
    cout << "El angulo en radianes es: " << f1 << endl;
    return 0;
}

