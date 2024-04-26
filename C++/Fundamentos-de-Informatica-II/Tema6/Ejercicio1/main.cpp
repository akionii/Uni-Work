#include "Musica.h"
#include "ListaDeReproduccion.h"
#include <iostream>

int main()
{
    // Crear algunos objetos de música
    Musica cancion1("Canción Uno", "Artista A", 210); // 210 segundos
    Musica cancion2("Canción Dos", "Artista B", 190);
    Musica cancion3("Canción Tres", "Artista C", 230);

    // Mostrar los detalles de las canciones
    cout << cancion1.toString() << endl;
    cout << cancion2.toString() << endl;
    cout << cancion3.toString() << endl;

    // Verificar la igualdad
    if (cancion1 == cancion2)
    {
        cout << "La Canción Uno y la Canción Dos son iguales." << endl;
    }
    else
    {
        cout << "La Canción Uno y la Canción Dos son diferentes." << endl;
    }

    // Verificar comparación de duración
    if (cancion1 < 220)
    {
        cout << "La Canción Uno es más corta que 220 segundos." << endl;
    }
    else
    {
        cout << "La Canción Uno es más larga que 220 segundos." << endl;
    }

    // Crear una lista de reproducción y agregar canciones a ella
    ListaDeReproduccion playlist(cancion1);
    playlist += cancion2;
    playlist += cancion3;

    // Mostrar detalles de la lista de reproducción
    cout << "Contenido de la lista de reproducción:" << endl;
    cout << playlist.toString() << endl;

    // Establecer y obtener la canción que se está reproduciendo actualmente
    playlist.setReproduciendo(1); // Establecer la canción que se está reproduciendo actualmente en la segunda canción de la lista
    Musica &reproduciendoActualmente = playlist.getReproduciendo();
    cout << "Reproduciendo actualmente: " << reproduciendoActualmente.toString() << endl;

    // Intentar establecer una canción como reproduciéndose pasando un objeto de canción
    if (playlist.setReproduciendo(cancion3))
    {
        cout << "Se estableció correctamente la canción que se está reproduciendo actualmente como " << cancion3.getNombre() << endl;
    }
    else
    {
        cout << "No se pudo establecer la canción como reproduciéndose." << endl;
    }

    // Intentar establecer una canción como reproduciéndose pasando un índice de canción
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
