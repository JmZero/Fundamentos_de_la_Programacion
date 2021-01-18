/* Programa que leera un entero y separara sus digitos
	con tres espacios entre un digito y otro.
*/

#include <iostream>								//Inclusi�n recursos E/S
#include <cmath>									//Inclusi�n recursos matematicos

using namespace std;

int main(){											//Programa principal
	int entero, digito, potencia;				//Declaraci�n de variables
	int divisor, numero_copia;
	
	cout << "Introduzca un entero: ";
	cin >> entero;
	
	potencia = 0;
	numero_copia = abs(entero);
	
	do{
		numero_copia = numero_copia / 10;
		potencia++;
	}while (numero_copia > 0);
	
	do{
		if (entero < 0)
			cout << "-";
		potencia--;
		divisor = pow(10, potencia);
		digito = abs(entero) / divisor;
		entero = abs(entero) % divisor;
		cout << digito << "   ";
	}while (entero >= 0 && potencia > 0);
	
	
	cout << "\n\n";
	system("pause");
}
