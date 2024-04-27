#include <iostream>
#include <string>
using namespace std;

class Luz
{
private:
    string color;

public:
    // Constructor que inicializa el semáforo en rojo
    Luz() : color("Rojo") {}

    // Método para cambiar el color del semáforo
    void cambioDeColor()
    {
        if (color == "Rojo")
            color = "Verde";
        else if (color == "Verde")
            color = "Amarillo";
        else if (color == "Amarillo")
            color = "Rojo";
    }

    // Método para obtener el color actual del semáforo
    string getColor() const
    {
        return color;
    }
};

int main()
{
    Luz semaforo1, semaforo2;
    cout << "Simulación de dos semáforos en un cruce:" << endl;
    for (int i = 0; i < 5; i++)
    {
        semaforo1.cambioDeColor();
        semaforo2.cambioDeColor();
        cout << "Semaforo 1: " << semaforo1.getColor() << " | Semaforo 2: " << semaforo2.getColor() << endl;
    }
    return 0;
}