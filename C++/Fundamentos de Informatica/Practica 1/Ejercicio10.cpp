#include <iostream>

using namespace std;

int main() {
    // Variables para almacenar el sueldo bruto mensual y el numero de anos en la empresa
    int sueldoBrutoMensual, anosEnEmpresa;

    // Leer el sueldo bruto mensual y el numero de anos en la empresa
    cout << "Ingrese el sueldo bruto mensual del trabajador: ";
    cin >> sueldoBrutoMensual;

    cout << "Ingrese el numero de anos en la empresa: ";
	
    cin >> anosEnEmpresa;

    // Calcular el descuento por impuestos y seguro médico
    double descuentoImpuestos = 0.15 * sueldoBrutoMensual;
    double descuentoSeguroMedico = 0.045 * sueldoBrutoMensual;

    // Calcular la gratificación por trienios y anos en la empresa
    double gratificacionTrienios = 45 * (anosEnEmpresa / 3);
    double gratificacionAnos = 5 * anosEnEmpresa;

    // Calcular el salario mensual neto
    double salarioNeto = sueldoBrutoMensual - descuentoImpuestos - descuentoSeguroMedico + gratificacionTrienios + gratificacionAnos;

    // Mostrar el salario mensual neto
    cout << "El salario mensual neto del trabajador es: " << salarioNeto << " euros." << endl;

    return 0;
}
