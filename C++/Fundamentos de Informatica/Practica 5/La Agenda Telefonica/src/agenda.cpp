#include "agenda.h"
#include <iostream>

Usuario usuarios[200][4];
/*
    Definición de un array bidimensional para almacenar información de usuarios.
    Cada fila representa un usuario, y cada columna almacena un tipo de información (DNI, nombre, apellidos, teléfono).
    Se pueden almacenar hasta 200 usuarios, cada uno con 4 campos.
*/

void menu()
{
    int opcion;

    do
    {
        cout << "\nSeleccione una opción:\n"
             << "1. Añadir un nuevo elemento a la agenda.\n"
             << "2. Eliminar un elemento de la agenda, indicado por el DNI.\n"
             << "3. Buscar un elemento de la agenda por DNI y mostrarlo por pantalla.\n"
             << "4. Contar el número de elementos cuyo apellido empieza por una letra indicada por el usuario.\n"
             << "5. Mostrar todos los registros de la agenda.\n"
             << "6. Resetear la agenda.\n"
             << "7. Comprobar si existen elementos repetidos (DNIs).\n"
             << "8. Longitud media de los nombres de la agenda.\n"
             << "9. Salir.\n"
             << "Opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            agregarUsuario();
            break;

        case 2:
            eliminarUsuarioPorDNI();
            break;

        case 3:
            buscarPorDNI();
            break;

        case 4:
            contarPorApellido();
            break;

        case 5:
            mostrarUsuarios();
            break;

        case 6:
            resetearAgenda();
            break;

        case 7:
            verificarRepetidos();
            break;

        case 8:
            cout << "Longitud media de los nombres: " << longitudMediaNombres() << "\n";
            break;

        case 9:
            cout << "Saliendo del programa.\n";
            break;

        default:
            cout << "Opción no válida. Inténtelo de nuevo.\n";
            break;
        }

    } while (opcion != 9);
}

void agregarUsuario()
{
    Usuario nuevoUsuario;
    cout << "\nIngrese el DNI (entero): ";
    cin >> nuevoUsuario.dni;

    cout << "Ingrese el nombre: ";
    cin.ignore();
    getline(cin, nuevoUsuario.nombre);

    cout << "Ingrese los apellidos: ";
    getline(cin, nuevoUsuario.apellidos);

    cout << "Ingrese el teléfono (entero): ";
    cin >> nuevoUsuario.telefono;

    // Buscar la primera fila disponible en el array usuarios para almacenar el nuevo usuario
    for (int i = 0; i < 200; ++i)
    {
        if (usuarios[i][0].dni == 0)
        {
            usuarios[i][0] = nuevoUsuario;
            cout << "\nUsuario añadido a la agenda.\n";
            return;
        }
    }

    cout << "\nNo se pudo agregar el usuario. La agenda está llena.\n";
}

void eliminarUsuarioPorDNI()
{
    int dniEliminar;
    cout << "\nIngrese el DNI a eliminar: ";
    cin >> dniEliminar;

    // Buscar el usuario con el DNI especificado
    for (int i = 0; i < 200; i++)
    {
        if (usuarios[i][0].dni == dniEliminar)
        {
            usuarios[i][0] = Usuario(); // Limpiar la fila correspondiente estableciendo un nuevo Usuario con valores predeterminados
            cout << "\nUsuario con DNI " << dniEliminar << " eliminado.\n";
            return;
        }
    }

    cout << "\nUsuario con DNI " << dniEliminar << " no encontrado.\n";
}

void buscarPorDNI()
{
    int dniBuscar;
    cout << "\nIngrese el DNI a buscar: ";
    cin >> dniBuscar;

    // Buscar el usuario con el DNI especificado
    for (int i = 0; i < 200; ++i)
    {
        if (usuarios[i][0].dni == dniBuscar)
        {
            // Mostrar la información del usuario encontrado
            cout << "\nUsuario encontrado:" << endl;
            cout << "DNI: " << usuarios[i][0].dni << "\n"
                 << "Nombre: " << usuarios[i][0].nombre << "\n"
                 << "Apellidos: " << usuarios[i][0].apellidos << "\n"
                 << "Teléfono: " << usuarios[i][0].telefono << "\n";
            return;
        }
    }

    cout << "\nUsuario con DNI " << dniBuscar << " no encontrado.\n";
}

void contarPorApellido()
{
    char letra;
    cout << "\nIngrese la letra del apellido (en minúscula): ";
    cin >> letra;

    int contador = 0;

    // Contar usuarios cuyos apellidos empiezan por la letra indicada (sin distinción de mayúsculas o minúsculas)
    for (int i = 0; i < 200; ++i)
    {
        if (!usuarios[i][0].apellidos.empty() &&
            (usuarios[i][0].apellidos[0] == letra || usuarios[i][0].apellidos[0] == letra + 'a' - 'A'))
        {
            contador++;
        }
    }

    cout << "\nNúmero de elementos cuyo apellido empieza por '" << letra << "': " << contador << "\n";
}

void mostrarUsuarios()
{
    cout << "\nListado de usuarios:\n";
    cout << "\n ---------------------------------------------------\n";

    for (int i = 0; i < 200; ++i)
    {
        if (usuarios[i][0].dni != 0)
        {
            cout << " | DNI: " << usuarios[i][0].dni << " | ";
            cout << "Nombre: " << usuarios[i][0].nombre << " | ";
            cout << "Apellidos: " << usuarios[i][0].apellidos << " | ";
            cout << "Teléfono: " << usuarios[i][0].telefono << " | \n";
            cout << " ---------------------------------------------------\n";
        }
    }
}

void resetearAgenda()
{
    // Asignar un nuevo objeto Usuario con valores predeterminados a cada elemento del array
    for (int i = 0; i < 200; i++)
    {
        usuarios[i][0] = Usuario();
    }

    cout << "\nAgenda reseteada.\n";
}

bool verificarRepetidos()
{
    int dniList[200];         // Array para almacenar los DNIs ya vistos
    int cantidadUsuarios = 0; // Variable para rastrear la cantidad actual de usuarios

    // Inicializar el array con DNIs ya vistos a 0
    for (int i = 0; i < 200; ++i)
    {
        dniList[i] = 0;
    }

    // Verificar si hay DNIs repetidos en la agenda
    for (int i = 0; i < 200; i++)
    {
        if (usuarios[i][0].dni != 0) // Verificar que la fila tenga un usuario válido
        {
            // Verificar si el DNI ya ha sido visto
            for (int j = 0; j < cantidadUsuarios; j++)
            {
                if (dniList[j] == usuarios[i][0].dni)
                {
                    cout << "\nExisten elementos repetidos (DNIs).\n";
                    return true;
                }
            }

            // Anadir el DNI a la lista
            dniList[cantidadUsuarios++] = usuarios[i][0].dni;
        }
    }

    cout << "\nNo hay elementos repetidos (DNIs).\n";
    return false;
}

double longitudMediaNombres()
{
    double totalLongitud = 0;
    int cantidadNombres = 0;

    // Calcular la longitud total de los nombres y contar la cantidad de nombres
    for (int i = 0; i < 200; i++)
    {
        if (usuarios[i][0].dni != 0) // Verificar que la fila tenga un usuario válido
        {
            totalLongitud += usuarios[i][0].nombre.length();
            cantidadNombres++;
        }
    }

    // Calcular la longitud media
    if (cantidadNombres > 0)
    {
        return totalLongitud / cantidadNombres;
    }
    else
    {
        cout << "\nLa agenda está vacía. No se puede calcular la longitud media de los nombres.\n";
        return 0;
    }
}
