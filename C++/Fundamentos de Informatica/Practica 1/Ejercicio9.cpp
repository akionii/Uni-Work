#include <cmath>
#include <iostream>

using namespace std;

void nformula (double n) {
	double Res = (abs(pow(n, 3)) * log(n*2))/sqrt(n*3);
	cout << "(abs(2^3) log(2x2))/sqrt(2x3) = " << Res << endl; 
}

int main() {
	// Calculadora de la Ecuacion: (abs(n^3) log(n×2))/sqrt(n×3)
	cout << "Segun la siguiente ecuacion (abs(n^3) log(nx2))/sqrt(nx3)" << endl;
	double n;
	cout << "Introduzca el valor de n: " << endl;
	cin >> n;
	nformula(n);
	
}