#include <iostream>
#include <cstdlib> // Para generar numeros aleatorios

using namespace std;

int main() {
    int fichas = 0;
    int opcion;
    int apuesta;
    int numeroElegido;
    int numeroAleatorio;

    do {
        cout << "Menu principal:" << endl;
        cout << "1. Introducir fichas" << endl;
        cout << "2. Jugar" << endl;
        cout << "3. Ver saldo" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduzca la cantidad de fichas a ingresar: ";
                cin >> apuesta;
                fichas += apuesta;
                break;

            case 2:
                if (fichas <= 0) {
                    cout << "No tiene suficientes fichas para apostar. Introduzca fichas primero." << endl;
                    break;
                }

                cout << "Elija a qué numero juega (0-32): ";
                cin >> numeroElegido;

                if (numeroElegido < 0 || numeroElegido > 32) {
                    cout << "Numero invalido. Debe estar entre 0 y 32." << endl;
                    break;
                }

                cout << "Introduzca la cantidad de fichas a apostar: ";
                cin >> apuesta;

                if (apuesta <= 0 || apuesta > fichas) {
                    cout << "Apuesta invalida. Debe apostar al menos 1 ficha y no mas de las que posee." << endl;
                    break;
                }

                numeroAleatorio = rand() % 33; // Generar numero aleatorio entre 0 y 32

                if (numeroAleatorio == numeroElegido) {
                    fichas += apuesta * 32;
                    cout << "¡Ha ganado! Su nuevo saldo es: " << fichas << " fichas" << endl;
                } else if (numeroAleatorio % 2 == 0) {
                    fichas += apuesta * 2;
                    cout << "Ha salido un numero par. Su nuevo saldo es: " << fichas << " fichas" << endl;
                } else {
                    cout << "Ha salido un numero impar. Ha perdido " << apuesta << " fichas." << endl;
                    fichas -= apuesta;
                }
                break;

            case 3:
                cout << "Su saldo actual es: " << fichas << " fichas" << endl;
                break;

            case 4:
                cout << "Gracias por jugar. Su saldo final es: " << fichas << " fichas" << endl;
                break;

            default:
                cout << "Opcion invalida. Inténtelo de nuevo." << endl;
                break;
        }

    } while (opcion != 4);

    return 0;
}
