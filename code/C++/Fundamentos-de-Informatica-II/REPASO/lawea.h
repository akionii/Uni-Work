#include<iostream>

using namespace std;

class Circulo {
    private:
    float radio;
    
    public:
    Circulo(){
        radio = 0.0;
    }

    Circulo(float r) {
        radio = r;
    }

    float obtenerArea();
    float obtenerRadio();
    
};