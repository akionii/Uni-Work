#include <iostream>
#include "./clases.h"

using namespace std;

int main()
{
    // Define player attributes
    int defaultStats[3] = {50, 50, 50}; // Example stats for simplicity

    // Initialize players for Team A
    Player playersA[11];
    for (int i = 0; i < 11; ++i)
    {
        string playerName = "Player A" + to_string(i + 1);
        float salary = 1000.0 * (i + 1); // Example: increasing salary
        playersA[i] = Player(playerName, salary, i + 1, defaultStats);
    }

    // Initialize the manager and team for Team A
    Manager managerA("Manager A", 50000, 0.5, 10);
    EquipoDeFutbol equipoA("Equipo A", playersA, managerA, 0, 0, 1000000);

    // Initialize players for Team B
    Player playersB[11];
    for (int i = 0; i < 11; ++i)
    {
        string playerName = "Player B" + to_string(i + 1);
        float salary = 950.0 * (i + 1); // Example: slightly different salary scale
        playersB[i] = Player(playerName, salary, i + 1, defaultStats);
    }

    // Initialize the manager and team for Team B
    Manager managerB("Manager B", 50000, 0.6, 15);
    EquipoDeFutbol equipoB("Equipo B", playersB, managerB, 0, 0, 1000000);

    // Initialize players for Team C
    Player playersC[11];
    for (int i = 0; i < 11; ++i)
    {
        string playerName = "Player C" + to_string(i + 1);
        float salary = 900.0 * (i + 1); // Example: another salary scale
        playersC[i] = Player(playerName, salary, i + 1, defaultStats);
    }

    // Initialize the manager and team for Team C
    Manager managerC("Manager C", 50000, 0.4, 20);
    EquipoDeFutbol equipoC("Equipo C", playersC, managerC, 0, 0, 1000000);

    // Simulate matches
    Partido partido1(1, 1, 2024, &equipoA, &equipoB);
    partido1.marcarGol(true);  // Team A scores
    partido1.marcarGol(false); // Team B scores
    cout << partido1.finalizarPartido() << endl;

    Partido partido2(1, 2, 2024, &equipoB, &equipoC);
    partido2.marcarGol(false); // Team C scores
    cout << partido2.finalizarPartido() << endl;

    Partido partido3(1, 3, 2024, &equipoA, &equipoC);
    partido3.marcarGol(true); // Team A scores
    partido3.marcarGol(true); // Team A scores again
    cout << partido3.finalizarPartido() << endl;

    // Print alignments and statistics
    cout << "Alineación de Equipo A:\n"
         << equipoA.getAlineacion() << endl;
    cout << "Alineación de Equipo B:\n"
         << equipoB.getAlineacion() << endl;
    cout << "Alineación de Equipo C:\n"
         << equipoC.getAlineacion() << endl;

    return 0;
}
