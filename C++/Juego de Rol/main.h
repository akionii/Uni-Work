#pragma once
#include <string>
#include<iostream>
using namespace std;

class jugador{
    private:
        class stats;
        float base_vida;
        float base_atk;
    public:
        jugador();
        void getNombre();
        float getVida();
        float getatk();
        void setvidaatk();
};

class partida{
    private:
    class jugador;
    public:
    ;
};

class stats{
    private:
        string nombre;
        float vida;
        float atk;

    public:

};