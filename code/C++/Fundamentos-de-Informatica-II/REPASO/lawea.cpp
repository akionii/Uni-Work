#include<iostream>
#include "lawea.h"

using namespace std;
float PI = 3.14;

float Circulo::obtenerArea(){
    return PI*radio*radio;
}

float Circulo::obtenerRadio(){
    return radio;   
}