#include "ListaDeReproduccion.h"

ListaDeReproduccion::ListaDeReproduccion(const Musica &inicial)
    : cant_musicas(0), reproduciendo(nullptr)
{
    musicas[0] = inicial;
    cant_musicas++;
}

Musica &ListaDeReproduccion::getReproduciendo()
{
    return *reproduciendo;
}

int ListaDeReproduccion::getCantMusicas()
{
    return cant_musicas;
}

bool ListaDeReproduccion::setReproduciendo()
{
    if (cant_musicas > 0)
    {
        reproduciendo = &musicas[0];
        return true;
    }
    return false;
}

bool ListaDeReproduccion::setReproduciendo(int numero)
{
    if (numero >= 0 && numero < cant_musicas)
    {
        reproduciendo = &musicas[numero];
        return true;
    }
    return false;
}

bool ListaDeReproduccion::setReproduciendo(const Musica &musica)
{
    for (int i = 0; i < cant_musicas; i++)
    {
        if (musicas[i] == musica)
        {
            reproduciendo = &musicas[i];
            return true;
        }
    }
    return false;
}

string ListaDeReproduccion::toString()
{
    string result;
    for (int i = 0; i < cant_musicas; i++)
    {
        result += musicas[i].toString() + "\n";
    }
    return result;
}

ListaDeReproduccion &ListaDeReproduccion::operator+=(const Musica &musica)
{
    if (cant_musicas < 20)
    {
        bool exists = false;
        for (int i = 0; i < cant_musicas && !exists; i++)
        {
            if (musicas[i] == musica)
            {
                exists = true;
            }
        }
        if (!exists)
        {
            musicas[cant_musicas++] = musica;
        }
    }
    else
    {
        musicas[0] = musica; // Replace the first song if the list is full
    }
    return *this;
}
