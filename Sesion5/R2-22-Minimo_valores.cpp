/*	Programa que leera desde declado enteros, y nos imprimira 
	cuantos entero se han introducido y cual es el menor de ellos.
	para terminar la introducci�n de entero introducimos 0, el cual 
	tambien se cuenta en la cadena.
*/

#include <iostream>									//Inclusi�n recursos E/S

using namespace std;

int main(){												//Programa principal
	int dato, dato_mas_pequenio, entero;		//Declaraci�n de variables
	
	entero = 0;											//Inicializaci�n de variables
	dato_mas_pequenio = 0;
	
	do{
		cout << "Introduzca un entero (para terminar ponga 0): ";
		cin >> dato;
		
		if (dato < dato_mas_pequenio)
			dato_mas_pequenio = dato;
		entero++;
	}while (dato != 0);
	
	cout << "\nSe han introducido " << entero << " enteros y el menor de ellos es " << dato_mas_pequenio << ".\n\n";
	
	system ("pause");
}
