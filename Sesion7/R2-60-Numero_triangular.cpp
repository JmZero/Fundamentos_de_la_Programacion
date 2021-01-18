/*	Programa que leera desde teclado un entero tope
	y mostrara en pantalla todos los números triangulares
	por debajo de dicho tope.
*/

#include <iostream>							//Inclusión recursos E/S

using namespace std;

int main(){										//Programa pirncipal
	const int MINIMO_TOPE = 2;				//Declaración de variables constantes
	int tope;									//Declaración de variables E/S y auxiliares
	int triangular, siguiente;
	
	cout << "Introduzca el tope: ";
	cin >> tope;
	/*
		Comprobaremos que el tope es mayor que 1.
		Si es mayor a 1 inicializaremos el primer triangular a 1 y
		el numero para calcular el siguiente triangular a 2.
		Un bucle comprobara que el triangular no pase el tope y
		calcule el siguiente sumando al anterior tringular un 
		valor que aumenta de 1 en 1.
	*/
	
	if (tope < MINIMO_TOPE)
		cout << "\nNo existen triangulares por debajo de este numero.";
	else{
		cout << "\nLos triangulares son los siguientes: ";
		
		triangular = 1;
		siguiente = 2;
		
		while (triangular < tope){
			cout << triangular << " ";
			triangular = triangular + siguiente;
			siguiente++;
		}
	}
	
	cout << "\n\n";
	system("pause");
}
		
