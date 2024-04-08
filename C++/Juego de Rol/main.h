#pragma once
#include <string>
#include<iostream>
using namespace std;

class jugador{
    private:
        class stats;
        class hechicero;
        class guerrero;
        float base_vida;
        float base_atk;

    public:
        jugador();
        void getNombre();
        float getVida();
        float getAtk();
        void setVidaatk();
        void activarPoder();
        void getAtk(float danho);
        string toString();
};

class partida{
    private:
        class jugador;
        bool turno_jugador_1;
        bool Partida_en_curso;
        void mostrarPartida();

    public:
        partida();
        partida(jugador Jugador);
        void setJugador1(jugador Jugador1);
        void setJugador2(jugador Jugador2);
        void empezarPartida();
        bool accionSeleccionada(int accion);
};

class stats{
    private:
        string nombre;
        float vida;
        float atk;
    
    public:
        stats();
};

class hechicero{
    private:
        int magia_utilizada;
        int limite_de_usos;

    public:
        hechicero();
        void setAtkHp();
        void activarPoder();
        string toString();
};

class guerrero{
    private:
        bool escudo;
        int escudo_utilizado;
        int limite_de_usos;
    public:
        guerrero();
        void setAtkHp();
        void avtivarPoder();
        void recivirAtk(float danho);
        string toString();
};