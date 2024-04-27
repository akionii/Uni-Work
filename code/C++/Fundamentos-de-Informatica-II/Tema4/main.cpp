#include "clases.h"

int main()
{
    // Definimos los atributos de los jugadores
    int stats[3] = {50, 50, 50};

    // Inicializamos jugadores del equipo 🖕
    Player playersA[11];
    for (int i = 0; i < 11; ++i)
    {
        string playerName = "Player A" + to_string(i + 1);
        float salario = 1000.0 * (i + 1);
        playersA[i] = Player(playerName, salario, i + 1, stats);
    }

    // Inicializamos manager y equipo del equipo 🖕
    Manager managerA("Manager A", 50000, 0.5, 10);
    EquipoDeFutbol equipoA("Equipo 🖕", playersA, managerA, 0, 0, 1000000);

    // Inicializamos jugadores del equipo ☂️
    Player playersB[11];
    for (int i = 0; i < 11; ++i)
    {
        string playerName = "Player B" + to_string(i + 1);
        float salario = 950.0 * (i + 1);
        playersB[i] = Player(playerName, salario, i + 1, stats);
    }

    // Inicializamos manager y equipo del equipo ☂️
    Manager managerB("Manager ☂️", 50000, 0.6, 15);
    EquipoDeFutbol equipoB("Equipo ☂️", playersB, managerB, 0, 0, 1000000);

    // Inicializamos jugadores del equipo C
    Player playersC[11];
    for (int i = 0; i < 11; ++i)
    {
        string playerName = "Player C" + to_string(i + 1);
        float salario = 900.0 * (i + 1);
        playersC[i] = Player(playerName, salario, i + 1, stats);
    }

    // Inicializamos manager y equipo del equipo C
    Manager managerC("Manager C", 50000, 0.4, 20);
    EquipoDeFutbol equipoC("Equipo C", playersC, managerC, 0, 0, 1000000);

    // Simulamos los partidos
    Partido partido1(1, 1, 2024, &equipoA, &equipoB);
    partido1.marcarGol(true);  // Goles del Equipo 🖕
    partido1.marcarGol(false); // Goles del Equipo ☂️
    cout << partido1.finalizarPartido() << endl;

    Partido partido2(1, 2, 2024, &equipoB, &equipoC);
    partido2.marcarGol(false); // Goles del Equipo C
    cout << partido2.finalizarPartido() << endl;

    Partido partido3(1, 3, 2024, &equipoA, &equipoC);
    partido3.marcarGol(true); // Goles del Equipo 🖕
    partido3.marcarGol(true); // Goles del Equipo 🖕 otra vez
    cout << partido3.finalizarPartido() << endl;

    // Mostramos las alineaciones y las estadisticas
    cout << equipoA.getAlineacion() << endl;
    cout << equipoB.getAlineacion() << endl;
    cout << equipoC.getAlineacion() << endl;

    return 0;
}