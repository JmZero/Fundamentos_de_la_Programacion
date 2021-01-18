/* Programa para calcular a partir del salario y la edad de una persona
	si se le ha de realizar una subida de salario del 5% o no.
*/

#include <iostream>													//Inclusi�n de recursos E/S

using namespace std;

int main(){																//Programa principal
	const int SALARIO_TOPE = 300, EDAD_MINIMA = 65;			//Declari�n de constantes
	const double SUBIDA_SALARIO = 0.05;
	int edad;															//Declaraci�n de variables de entrada
	double salario;
	double salario_final;											//Declaraci�n de variables de salida
	
	cout << "Introduzca el salario: ";
	cin >> salario;
	cout << "Introduzca la edad: ";
	cin >> edad;
	
	if (salario < SALARIO_TOPE && edad > EDAD_MINIMA){
		salario_final = salario + salario*SUBIDA_SALARIO;
	}
	else{
		salario_final = salario;
		cout << "\nNo es aplicable la subida.";
	}
	
	cout << "\nEl salario final es de " << salario_final << " euros.\n\n";
	
	system("pause");
}
