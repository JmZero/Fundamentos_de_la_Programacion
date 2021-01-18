/* Programa para calcular el n�mero de a�os para que 
	la reinversi�n de un capital duplique al capital inicial
	como m�nimo.
*/

#include <iostream>												// Inclusi�n recursos E/S

using namespace std;

int main(){															// Programa principal
	double interes, capital, tope_capital;					// Declaracion de variables
	int anio;
	
	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "\nIntroduzca el valor del interes: ";
	cin >> interes;
	
	anio = 0;														//Inicializacion de variable
	tope_capital = 2*capital;
	
	while (capital < tope_capital){
		capital = capital + capital*(interes/100);
		anio++;
	}
	
	cout << "\nHan de pasar " << anio << " anios para que se duplique, como minimo, el capital.\n\n";
	system("pause");
}
