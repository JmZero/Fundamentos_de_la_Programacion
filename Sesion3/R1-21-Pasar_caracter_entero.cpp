/*Programa que lee desde teclado un caracter num�rico
	de tipo char y lo trasnforma en uno de tipo entero.
*/

#include<iostream>										//Inclusi�n recuersos E/S

using namespace std;

int main(){													//Programa principal.
	const int caracter_num = 48;						//Declaraci�n de variable constante. Usaremos en lugar del "numero imaginario" '0'.
	int entero;												//Declaraci�n de variables.
	char caracter;
	
	cout << "Introduzca un caracter numerico: ";	//El programa lee un cararcter numerico y
	cin >> caracter;										//lo almacena en una variable de tipo char
	
	entero = caracter - caracter_num;				//Para que muestre el entero correspondiente a la entrada
																//le restaremos a la variable de tipo char 48, 
																//lo cual en la tabla ASCII equivaldria al n�mero introducido.
																//posici�n del n�mero en tabla - 48 = n�mero introducido.
																
	cout << "\nEl caracter numerico es: " << entero << "\n\n";
	system("pause");
}
