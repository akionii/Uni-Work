#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/* Se supone que las medidas introducidas por el usuario vienen en centimetros SIN decimales.
	Por ello se usan los tipos de variable int y double. */
	int diametro, revoluciones;
	float perimetro, distancia_recorrida, pi = 3.14159;

	// Le pedimos al usuario los valores necesarios.
	cout << "Introduzca el diametro de la rueda y el numero de revoluciones por minuto: " << endl;
	cin >> diametro >> revoluciones;
	cout << " \n"
		 << endl;

	// Verificamos que los valores dados por el usuario son validos.
	while (diametro < 0 || revoluciones < 0)
	{
		if (diametro < 0)
		{
			cout << "El valor del diametro dado no es valido, vuelva a introducirlo: ";
			cin >> diametro;
			cout << " \n"
				 << endl;
		}
		if (revoluciones < 0)
		{
			cout << "El valor de revoluciones dado no es valido, vuelva a introducirlo: ";
			cin >> revoluciones;
			cout << " \n"
				 << endl;
		}
	}

	/* Para sacar el perimetro de la rueda necesitamos el radio,
	el cual sacamos dividiendo /2 el diametro dado por el usuario. */
	perimetro = 2 * pi * (diametro / 2);

	/* Por ultimo, se nos pide calcular el espacio recorido por la rueda en un minuto,
	esto se puede hacer facilmente multiplicando el perimetro por las revoluciones por minuto introducidas por el usuario*/
	distancia_recorrida = perimetro * revoluciones;

	// Imprimimos por pantalla los resultados
	cout << "El perimetro de la rueda es el sigueinte: " << perimetro << "\n"
		 << endl;
	cout << "La distancia recorrida por la rueda en un minuto es igual a: " << distancia_recorrida << "\n"
		 << endl;
}