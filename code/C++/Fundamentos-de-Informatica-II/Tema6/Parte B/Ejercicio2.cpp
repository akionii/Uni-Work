#include <iostream>

using namespace std;

class Vector2D
{
public:
    float x;
    float y;

    Vector2D() : x(0), y(0) {}
    Vector2D(float xCoord, float yCoord) : x(xCoord), y(yCoord) {}

    Vector2D operator+(const Vector2D &otro) const
    {
        return Vector2D(x + otro.x, y + otro.y);
    }

    Vector2D operator/(int divisor) const
    {
        if (divisor == 0)
        {
            cerr << "Error: Intento de dividir por cero.\n";
            return *this;
        }
        else
        {
            return Vector2D(x / divisor, y / divisor);
        }
    }
};

Vector2D promedioVectores(Vector2D vectores[], int cantidad)
{
    Vector2D acumulado;

    for (int i = 0; i < cantidad; ++i)
    {
        acumulado = acumulado + vectores[i];
    }

    return acumulado / cantidad;
}

int main()
{
    Vector2D arrayVectores[5] = {
        Vector2D(3, 2),
        Vector2D(5, 4),
        Vector2D(7, 6),
        Vector2D(9, 8),
        Vector2D(5, 10)};

    Vector2D resultadoPromedio = promedioVectores(arrayVectores, 5);

    cout << "El promedio de los vectores es: (" << resultadoPromedio.x << ", " << resultadoPromedio.y << ")" << endl;

    return 0;
}
