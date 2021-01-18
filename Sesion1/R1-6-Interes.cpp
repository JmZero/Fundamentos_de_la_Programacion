/* Programa para calcular el valor total de su capital
	al X de interes, al cabo de un año.
	Necesita: capital, interes.
	Calcula: total.
*/

#include <iostream>												// Inclusión recursos E/S

using namespace std;

int main(){															// Programa principal
	double total, interes, capital;							// Declaracion de variables
	
	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "\nIntroduzca el valor del interes: ";
	cin >> interes;
	
	total = capital + capital*(interes/100);
	
	cout << "\nEl valor de su capital total al pasar un año es: " << total << "\n\n";
	
	system("pause");
}
