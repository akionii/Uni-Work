
#include "Musica.h"
#include "ListaDeReproduccion.h"
#include <iostream>

int main()
{
    Musica cancion1("Canción de los coches chocones", "Los Toreros", 180); // 180 segundos
    Musica cancion2("Sevillana del amor perdido", "Los Románticos", 240);  // 240 segundos
    Musica cancion3("Canción del verano", "La Orquesta Estival", 200);     // 200 segundos

    cout << cancion1.toString() << endl;
    cout << cancion2.toString() << endl;
    cout << cancion3.toString() << endl;

    if (cancion1 == cancion2)
    {
        cout << "La Canción de los coches chocones y la Sevillana del amor perdido son iguales." << endl;
    }
    else
    {
        cout << "La Canción de los coches chocones y la Sevillana del amor perdido son diferentes." << endl;
    }

    // Verificar comparación de duración
    if (cancion1 < 220)
    {
        cout << "La Canción de los coches chocones es más corta que 220 segundos." << endl;
    }
    else
    {
        cout << "La Canción de los coches chocones es más larga que 220 segundos." << endl;
    }

    ListaDeReproduccion playlist(cancion1);
    playlist += cancion2;
    playlist += cancion3;

    cout << "Contenido de la lista de reproducción:" << endl;
    cout << playlist.toString() << endl;

    playlist.setReproduciendo(1);
    Musica &reproduciendoActualmente = playlist.getReproduciendo();
    cout << "Reproduciendo actualmente: " << reproduciendoActualmente.toString() << endl;

    if (playlist.setReproduciendo(cancion3))
    {
        cout << "Se estableció correctamente la canción que se está reproduciendo actualmente como " << cancion3.getNombre() << endl;
    }
    else
    {
        cout << "No se pudo establecer la canción como reproduciéndose." << endl;
    }

    if (playlist.setReproduciendo(2))
    {
        cout << "Se estableció correctamente la canción que se está reproduciendo actualmente como la tercera canción en la lista." << endl;
    }
    else
    {
        cout << "No se pudo establecer la canción como reproduciéndose por índice." << endl;
    }

    return 0;
}
