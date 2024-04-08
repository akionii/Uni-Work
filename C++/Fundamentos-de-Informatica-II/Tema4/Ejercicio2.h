#include <string>
#include <iostream>

using namespace std;

class Persona
{
protected:
    string nombre;
    float salario;

public:
    Persona() {}
    Persona(string nombre, float salario) : nombre(nombre), salario(salario) {}
    virtual string getNombre() { return nombre; }
    virtual float getSalario() { return salario; }
    virtual void setSalario(float base) = 0;
    virtual string toString() = 0;
};

class Player : public Persona
{
private:
    int numero;
    int stats[3]; // Defensa, Mediocampo, Ataque
public:
    Player() : Persona() {}
    Player(string nombre, float salario, int numero, const int stats[3]);
    int getNumero() { return numero; }
    void setNumero(int numero) { this->numero = numero; }
    int *getStats() { return stats; }
    void setStats(const int stats[3]);
    void setSalario(float base) override;
    string toString() override;
};

class Manager : public Persona
{
private:
    int nro_de_partidos;
    float rating;

public:
    Manager() : Persona(), nro_de_partidos(0), rating(0.0) {}
    Manager(string nombre, float salario, float rating, int nro_de_partidos);
    float getRating() { return rating; }
    int getNroDePartidos() { return nro_de_partidos; }
    void modificarRating(bool partidoGanado);
    void setSalario(float base) override;
    string toString() override;
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
    EquipoDeFutbol() : partidos_jugados(0), partidos_ganados(0), fairplay_limit(0) {}
    void setJugadores(Player jugadores[11]);
    void setManager(Manager manager);
    string getAlineacion();
    long double getSalarioClub();
    void modificarEstadisticas(bool partidoGanado);
};

class Partido
{
private:
    int fecha[3];
    EquipoDeFutbol *local;
    EquipoDeFutbol *visitante;
    int marcador[2];
    int numero_de_partidos;

public:
    Partido() : local(nullptr), visitante(nullptr), numero_de_partidos(0)
    {
        marcador[0] = 0;
        marcador[1] = 0;
    }
    Partido(int fecha[3], EquipoDeFutbol *local, EquipoDeFutbol *visitante);
    string obtenerAlineaciones();
    string obtenerEstadisticas(bool local);
    void marcarGol(bool local);
    string finalizarPartido();
};
