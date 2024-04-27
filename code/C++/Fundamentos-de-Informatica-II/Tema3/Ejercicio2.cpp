#include <iostream>
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
    Luz semaforo;
    for (int i = 0; i <= 3; i++)
    {
        semaforo.cambioDeColor();
        cout << "Color del Semaforo: " << semaforo.getColor() << endl;
    }

    return 0;
}
