#include<iostream>
#include "lawea.h"

using namespace std;

int main(){
    Circulo circulo1;
    Circulo circulo2(4.0);

    cout << "Radio del circulo1 " << circulo1.obtenerRadio() << " y el radio del circulo2 es " << circulo2.obtenerRadio() << endl;
    cout << "Area del circulo1 " << circulo1.obtenerArea() << " y el area del circulo2 es " << circulo2.obtenerArea() << endl;
    
    return 0;
}

//POWERSHELL ES UN PUTO INUTIL, NO SABE COMO LITERALMENTE EJECUTAR DOS PUTOS PROGRAMAS .CPP EN UN PUTO MISMO .EXE EL CABRON DE MIERDA SABE,
//AL FINAL TUVE YO QUE PONERLO A MANO EN EL COMMAND PROMPT PORQUE EL COMMAND PROMPT ES LO MÁS SIMPLE Y CHETADO DE TODO, PUTO POWERCONCHA.