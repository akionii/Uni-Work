#include<iostream>

using namespace std;

int main () {
    
    int num = 100;
    int *ptr = &num;

    cout << *ptr << endl;  //el valor deberia ser 100
    cout << ptr << endl; //la direccion escrita en hexadecimal 
    
    int& ref = num;
    ref = 200; // cambiamos el valor de num a 200
    //entonces
    cout << num << endl; // num deberia ser igual a 200

     return 0;
}