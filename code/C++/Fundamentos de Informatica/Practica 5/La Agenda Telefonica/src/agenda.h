#ifndef AGENDA_H
#define AGENDA_H

#include <string>

using namespace std;

// Definición estructura Usuario que representa a cada usuario en la agenda
struct Usuario
{
    int dni = 0;           // DNI (Documento Nacional de Identidad)
    string apellidos = ""; // Apellidos del usuario
    string nombre = "";    // Nombre del usuario
    int telefono = 0;      // Número de teléfono del usuario
};

// Declaración array bidimensional global (extern) 'usuarios' para almacenar la agenda
extern Usuario usuarios[200][4];

// Declaración de funciones que manipulan la agenda
void agregarUsuario();         // Agrega un nuevo usuario a la agenda
void eliminarUsuarioPorDNI();  // Elimina un usuario basado en el DNI
void buscarPorDNI();           // Busca y muestra un usuario por su DNI
void contarPorApellido();      // Cuenta el número de usuarios con apellidos que empiezan con una letra
void mostrarUsuarios();        // Muestra todos los usuarios en la agenda
void resetearAgenda();         // Elimina todos los usuarios de la agenda, reiniciándola
bool verificarRepetidos();     // Verifica si hay DNIs repetidos en la agenda
double longitudMediaNombres(); // Calcula la longitud media de los nombres en la agenda

// Función principal que muestra un menú interactivo para operar con la agenda
void menu();

#endif
