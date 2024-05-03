#include <iostream>
#include <string>

using namespace std;

template <typename T>
void swapValues(T &first, T &second)
{
    T temp = first;
    first = second;
    second = temp;
}

class Vector2D
{
public:
    float x;
    float y;

    Vector2D() : x(0), y(0) {}
    Vector2D(float initialX, float initialY) : x(initialX), y(initialY) {}
};

int main()
{
    float num1 = 1.08, num2 = 3.14;
    cout << "Antes del intercambio num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "Después del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;

    string text1 = "Hola", text2 = "Mundo";
    cout << "Antes del intercambio text1 = " << text1 << ", text2 = " << text2 << endl;
    swapValues(text1, text2);
    cout << "Después del intercambio: text1 = " << text1 << ", text2 = " << text2 << endl;

    Vector2D vector1(1, 2), vector2(3, 4);
    cout << "Antes del intercambio: vector1 = (" << vector1.x << ", " << vector1.y << "), vector2 = (" << vector2.x << ", " << vector2.y << ")";
    swapValues(vector1, vector2);
    cout << "Después del intercambio: vector1 = (" << vector1.x << ", " << vector1.y << "), vector2 = (" << vector2.x << ", " << vector2.y << ")";

    return 0;
}
