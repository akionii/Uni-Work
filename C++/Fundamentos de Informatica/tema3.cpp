#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Declarar variables
	int n;

	cout << "Introduzca el valor de n: ";
	cin >> n;

	// Calcular la media de los dígitos de n
	if (n % 2 == 0)
	{
		int arr[10] = {}; // Usaremos un arreglo para almacenar los dígitos de n
		int i = 0;		  // Inicializar i en 0
		float promedio = 0.0;
		int num = n;

		while (num > 0)
		{
			arr[i] = num % 10; // Obtener el último dígito de n
			num = num / 10;	   // Quitar el último dígito de n
			i++;
		}

		int r;
		for (r = 0; r < i; r++)
		{
			promedio += arr[r];
		}

		if (i > 0)
		{
			promedio = promedio / i;
			cout << "El promedio de los dígitos de n es: " << promedio << endl;
		}
		else
		{
			cout << "No se ingresaron dígitos." << endl;
		}
	}
	// Calcular el número de primos entre 2 y n
	else
	{
		int primos = 0;
		for (int i = 2; i <= n; i++)
		{
			bool esPrimo = true;
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					esPrimo = false;
					break;
				}
			}
			if (esPrimo)
			{
				primos++;
			}
		}
		cout << "El número de primos entre 2 y n es: " << primos << endl;
	}

	return 0;
}
