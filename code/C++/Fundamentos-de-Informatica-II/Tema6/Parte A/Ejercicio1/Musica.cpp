#include "Musica.h"

Musica::Musica() : nombre(""), artista(""), duracion(0) {}

Musica::Musica(const string &nombre, const string &artista, int duracion)
    : nombre(nombre), artista(artista), duracion(duracion) {}

string Musica::getNombre() { return nombre; }
void Musica::setNombre(const string &nombre) { this->nombre = nombre; }

string Musica::getArtista() { return artista; }
void Musica::setArtista(const string &artista) { this->artista = artista; }

int Musica::getDuracion() { return duracion; }
void Musica::setDuracion(int duracion) { this->duracion = duracion; }

string Musica::toString()
{
    return "Nombre: " + nombre + ", Artista: " + artista + ", Duracion: " + to_string(duracion) + "s";
}

bool Musica::operator==(const Musica &otra)
{
    return nombre == otra.nombre && duracion == otra.duracion;
}

bool Musica::operator<(const int &comparacionDuracion)
{
    return duracion < comparacionDuracion;
}
