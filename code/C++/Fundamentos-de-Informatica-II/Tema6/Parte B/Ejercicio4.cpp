#include<iostream>
#include<string>

using namespace std;

template<typename T> void intercambio(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

class Vector2D {
    public:
        float x;
        float y;

        Vector2D() : x(0), y(0) {}
        Vector2D(float valorX, float valorY) : x(valorX), y(valorY) {}
    };


int main() {
   
    float a = 1.08, b = 3.14;
    cout << "sin intercambio a = " << a << ", b = " << b << endl;
    intercambio(a, b);
    cout << "intercambio: a = " << a << ", b = " << b << endl;

    string str1 = "Hola", str2 = "Mundo";
    cout << "sin intercambio str1 = " << str1 << ", str2 = " << str2 << endl;
    intercambio(str1, str2);
    cout << "intercambio: str1 = " << str1 << ", str2 = " << str2 << endl;

    Vector2D vec1(1, 2), vec2(3, 4);
    cout << "sin intercambio: vec1 = (" << vec1.x << ", " << vec1.y << "), vec2 = (" << vec2.x << ", " << vec2.y << ")";
    intercambio(vec1, vec2);
    cout << "intercambio: vec1 = (" << vec1.x << ", " << vec1.y << "), vec2 = (" << vec2.x << ", " << vec2.y << ")";

    return 0;
}
