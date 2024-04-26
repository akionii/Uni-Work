#pragma once
#include <iostream>
#include <string>
using namespace std;

class Musica
{
private:
    string nombre;
    string artista;
    int duracion;

public:
    friend class ListaDeReproduccion;
    Musica();
    Musica(const string &nombre, const string &artista, int duracion);
    string getNombre();
    void setNombre(const string &nombre);
    string getArtista();
    void setArtista(const string &artista);
    int getDuracion();
    void setDuracion(int duracion);
    string toString();
    bool operator==(const Musica &otra);
    bool operator<(const int &duracion);
};