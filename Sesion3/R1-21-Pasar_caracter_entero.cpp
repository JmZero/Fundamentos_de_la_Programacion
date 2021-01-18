/*Programa que lee desde teclado un caracter numérico
	de tipo char y lo trasnforma en uno de tipo entero.
*/

#include<iostream>										//Inclusión recuersos E/S

using namespace std;

int main(){													//Programa principal.
	const int caracter_num = 48;						//Declaración de variable constante. Usaremos en lugar del "numero imaginario" '0'.
	int entero;												//Declaración de variables.
	char caracter;
	
	cout << "Introduzca un caracter numerico: ";	//El programa lee un cararcter numerico y
	cin >> caracter;										//lo almacena en una variable de tipo char
	
	entero = caracter - caracter_num;				//Para que muestre el entero correspondiente a la entrada
																//le restaremos a la variable de tipo char 48, 
																//lo cual en la tabla ASCII equivaldria al número introducido.
																//posición del número en tabla - 48 = número introducido.
																
	cout << "\nEl caracter numerico es: " << entero << "\n\n";
	system("pause");
}
