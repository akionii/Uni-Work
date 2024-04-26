#include "Musica.h"
using namespace std;

class ListaDeReproduccion
{
private:
    Musica musicas[20];
    Musica *reproduciendo;
    int cant_musicas;

public:
    ListaDeReproduccion(const Musica &inicial);
    Musica &getReproduciendo();
    int getCantMusicas();
    bool setReproduciendo();
    bool setReproduciendo(int numero);
    bool setReproduciendo(const Musica &musica);
    string toString();
    ListaDeReproduccion &operator+=(const Musica &musica);
};
