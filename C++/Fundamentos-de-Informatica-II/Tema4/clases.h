#pragma once
#include <iostream>
#include <string>
using namespace std;

#include <string>

class Persona
{
protected:
    string nombre;
    float salario;

public:
    Persona(string nombre = "", float salario = 0.0)
        : nombre(nombre), salario(salario) {}

    string getNombre(); 
    float getSalario(); 

    virtual void setSalario(float base) = 0;

    virtual string toString();
};

class Player : public Persona
{
private:
    int numero;
    int stats[3]; // [Defensa, Mediocampo, Ataque]

public:
    Player();
    Player(string nombre, float salario, int numero, int stats[3]);

    int getNumero();
    void setNumero(int num);
    int *getStats();
    void setStats(int stats[3]);
    void setSalario(float base);
    string toString();
};

class Manager : public Persona
{
private:
    int nro_de_partidos;
    float rating;

public:
    Manager(string nombre, float salario, float rating, int ndp);
    void modificarRating(bool partidoGanado);
    void setSalario(float base);
    string toString();
};

class EquipoDeFutbol
{
private:
    string nombre;
    Player jugadores[11];
    Manager manager;
    int partidos_jugados;
    int partidos_ganados;
    long fairplay_limit;

public:
    EquipoDeFutbol(string nombre, Player js[11], Manager m, int pj, int pg, long fl);
    string getAlineacion();
    long double getSalarioClub();
    void modificarEstadisticas(bool partidoGanado);
    string toString();
};

class Partido
{
private:
    int fecha[3]; // formato [día, mes, año]
    EquipoDeFutbol *local;
    EquipoDeFutbol *visitante;
    int marcador[2]; // [goles local, goles visitante]

public:
    Partido(int d, int m, int a, EquipoDeFutbol *local, EquipoDeFutbol *visitante);
    string obtenerAlineaciones();
    string obtenerEstadisticas(bool esLocal);
    void marcarGol(bool esLocal);
    string obtenerMarcador();
    string finalizarPartido();
};