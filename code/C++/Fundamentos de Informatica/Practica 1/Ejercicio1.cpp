#include<iostream>
#include <iomanip>  // Necesario para std::boolalpha

using namespace std;

int main() {
    int a, b;
    float c, d;

    cout << "Enter four operands (a, b, c & d): ";
    cin >> a >> b >> c >> d;
    cout << endl;

    float n1 = static_cast<float>(a) / b;  // Se utiliza static_cast para evitar la conversión implícita.
    cout << "a) a/b = " << n1 << endl;

    float n2 = static_cast<float>(a) / c;
    cout << "b) a/c = " << n2 << endl;

    int n3 = a % b;  // Utilizar int en lugar de float para operaciones de módulo.
    cout << "c) a%b = " << n3 << endl;

    float n4 = a - b - c + d;  // Evitar realizar operaciones innecesarias por separado.
    cout << "d) a-b-c+d = " << n4 << endl;

    float n5 = 5 * c - 4 * a;
    cout << "e) 5*c - 4*a = " << n5 << endl;

    float n6 = a * b / c;  // Utilizar int en lugar de float para operaciones enteras.
    cout << "f) a*b/c = " << n6 << endl;

    float n7 = a * (d / c);
    cout << "g) a*(d/c) = " << n7 << endl;

    int n8 = a * b % b;  // Utilizar int en lugar de float para operaciones de módulo.
    cout << "h) a*b %b = " << n8 << endl;

    a = --b;
    cout << "i) a = --b, a = " << a << endl;

    b = a--;
    cout << "j) b = a--, b = " << b << endl;

    a += b;
    cout << "k) a += b, a = " << a << endl;

    a = b;
    cout << "l) a = b, a = " << a << endl;

    bool n9 = !a;
    std::cout << "m) !a = " << std::boolalpha << n9 << std::endl;

    bool n10 = (a == b) || (c > d);
    std::cout << "n) (a==b) || (c > d) " << std::boolalpha << n10 << std::endl;

    bool n11 = (a > b) && ((b > c) || (d < c));
    std::cout << "~n) (a>b) && (b>c) || (d<c) " << std::boolalpha << n11 << std::endl;

    bool n12 = (a * 3) || ((b * 2) && (3 * 2));
    std::cout << "o) a*3 || b*2 && (3*2) " << std::boolalpha << n12 << std::endl;

    return 0;
}
