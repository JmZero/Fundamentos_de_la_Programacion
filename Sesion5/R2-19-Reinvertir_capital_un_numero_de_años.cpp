/* Programa para calcular el capital que tendremos por 
	a�o dependiendo de los a�os que queramos dejarlo a
	plazo fijo.
*/

#include <iostream>												// Inclusi�n recursos E/S

using namespace std;

int main(){															// Programa principal
	double interes, capital;									// Declaracion de variables
	int tope_anios, anio;
	
	cout << "Introduzca el valor del capital: ";
	cin >> capital;
	cout << "\nIntroduzca el valor del interes: ";
	cin >> interes;
	cout << "\nIntroduzca el numero de anios a plazo fijo: ";
	
	do{																//Bucle testeo de a�os introducidos
		cin >> tope_anios;
	}while (tope_anios <= 0);
	
	anio = 1;														//Inicializacion de variable
	
	while (anio <= tope_anios){
		capital = capital + capital*(interes/100);
		cout << "\nTotal en el anio "<< anio << " = " << capital;
		anio++;
	}
	
	cout << "\n\n";
	system("pause");
}
