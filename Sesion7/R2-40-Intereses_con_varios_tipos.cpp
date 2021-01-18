/* Programa para calcular el capital que tendremos en
	cada año conociendo el tope de años que dejara el
	capital a plazo fijo. Ademas se calculara el % del
	interes desde el 1% hasta el % introducido mostrando
	el capital de cada año a un %.
*/

#include <iostream>												// Inclusión recursos E/S

using namespace std;

int main(){															// Programa principal
	double capital_inicial;										// Declaracion de variables de entrada
	int tope_interes, tope_anios;
	int anio, interes;											//Declaración de variables auxiliares
	double capital;
	
	cout << "Introduzca el valor del capital: ";
	cin >> capital_inicial;
	cout << "Introduzca el valor del interes: ";
	cin >> tope_interes;
	cout << "Introduzca el numero de anios a plazo fijo: ";
	
	do{																//Bucle testeo de años introducidos
		cin >> tope_anios;
	}while (tope_anios <= 0);
	
	/*
		El primer buque nos calculara el % a aplicar desde 1 hasta el tope introducido.
		El segundo bucle nos mostrara cada vez que se realice el primero el capital que 
		tendra el con el % del primer bucle cada año que pase.
	*/
	
	for (interes = 1; interes <= tope_interes; interes++){
		cout << "\n\nCalculos realizados al " << interes << "%:\n";
		capital = capital_inicial;
		for (anio = 1; anio <= tope_anios; anio++){
			capital = capital + capital*(interes/100.0);
			cout << "\n  Dinero obtenido en el anio " << anio << " = " << capital;
		}
	}
	
	cout << "\n\n";
	system("pause");
}
