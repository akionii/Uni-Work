#include "clases.h"

// Implementación de Persona
Persona::Persona(string nombre, float salario) : nombre(nombre), salario(salario) {}
Persona::~Persona() {}

string Persona::getNombre() const
{
    return nombre;
}

float Persona::getSalario() const
{
    return salario;
}

string Persona::toString() const
{
    return "Nombre: " + nombre + ", Salario: " + to_string(salario);
}

// Implementación de Player
Player::Player() : Persona(), numero(0)
{
    for (int i = 0; i < 3; i++)
        stats[i] = 0;
}

Player::Player(string nombre, float salario, int num, int s[3]) : Persona(nombre, salario), numero(num)
{
    for (int i = 0; i < 3; i++)
        stats[i] = s[i];
}

int Player::getNumero() const
{
    return numero;
}

void Player::setNumero(int num)
{
    numero = num;
}

int *Player::getStats()
{
    return stats;
}

void Player::setStats(int s[3])
{
    for (int i = 0; i < 3; i++)
        stats[i] = s[i];
}

void Player::setSalario(float base)
{
    float media = (stats[0] + stats[1] + stats[2]) / 3.0;
    salario = base * (media / 100.0);
}

string Player::toString() const
{
    return Persona::toString() + ", Número: " + to_string(numero);
}

// Implementación de Manager
Manager::Manager(string nombre, float salario, float rate, int ndp) : Persona(nombre, salario), rating(rate), nro_de_partidos(ndp) {}

void Manager::modificarRating(bool partidoGanado)
{
    if (partidoGanado)
    {
        rating = (rating * nro_de_partidos + 1) / (nro_de_partidos + 1);
    }
    else
    {
        rating = (rating * nro_de_partidos) / (nro_de_partidos + 1);
    }
    nro_de_partidos++;
}

void Manager::setSalario(float base)
{
    salario = base * (1 + rating);
}

string Manager::toString() const
{
    return Persona::toString() + ", Partidos: " + to_string(nro_de_partidos) + ", Rating: " + to_string(rating);
}

// Implementación de EquipoDeFutbol
EquipoDeFutbol::EquipoDeFutbol(string n, Player js[11], Manager m, int pj, int pg, long fl) : nombre(n), manager(m), partidos_jugados(pj), partidos_ganados(pg), fairplay_limit(fl)
{
    for (int i = 0; i < 11; i++)
    {
        jugadores[i] = js[i];
    }
}

string EquipoDeFutbol::getAlineacion() const
{
    string alineacion = "Alineación de " + nombre + ":\n";
    for (int i = 0; i < 11; i++)
    {
        alineacion += jugadores[i].toString() + "\n";
    }
    alineacion += "Manager: " + manager.toString();
    return alineacion;
}

long double EquipoDeFutbol::getSalarioClub() const
{
    long double totalSalario = manager.getSalario();
    for (const auto &jugador : jugadores)
    {
        totalSalario += jugador.getSalario();
    }
    return totalSalario;
}

void EquipoDeFutbol::modificarEstadisticas(bool partidoGanado)
{
    partidos_jugados++;
    if (partidoGanado)
        partidos_ganados++;
    manager.modificarRating(partidoGanado);
}

string EquipoDeFutbol::toString() const
{
    return "Equipo: " + nombre + ", Partidos Jugados: " + to_string(partidos_jugados) + ", Partidos Ganados: " + to_string(partidos_ganados);
}

// Implementación de Partido
Partido::Partido(int d, int m, int a, EquipoDeFutbol *l, EquipoDeFutbol *v) : fecha{d, m, a}, local(l), visitante(v), marcador{0, 0} {}

string Partido::obtenerAlineaciones()
{
    return "Local: \n" + local->getAlineacion() + "\nVisitante: \n" + visitante->getAlineacion();
}

string Partido::obtenerEstadisticas(bool esLocal)
{
    EquipoDeFutbol *equipo = esLocal ? local : visitante;
    return equipo->toString();
}

void Partido::marcarGol(bool esLocal)
{
    if (esLocal)
    {
        marcador[0]++;
    }
    else
    {
        marcador[1]++;
    }
}

string Partido::obtenerMarcador()
{
    return "Marcador: " + to_string(marcador[0]) + " - " + to_string(marcador[1]);
}

string Partido::finalizarPartido()
{
    local->modificarEstadisticas(marcador[0] > marcador[1]);
    visitante->modificarEstadisticas(marcador[1] > marcador[0]);
    return "Partido Finalizado: " + obtenerMarcador() + "\n" + local->toString() + "\n" + visitante->toString();
}
