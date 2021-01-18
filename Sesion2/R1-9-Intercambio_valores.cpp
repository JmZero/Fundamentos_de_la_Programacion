/*Programa que intercambia los valores de 2 variables.
	Necesitamos: valores de las variables a intercambiar.
	Calcula: valor intercambiado de las variables
*/

#include<iostream>									//Inclusión recursos E/S

using namespace std;

int main(){												//Programa principal
	int edad_Pedro, edad_Juan;						//Declaración variables de entrada
	int guardar_edad;									//Declaración variable auxiliar
	
	cout << "Introduzca la edad de Pedro: ";
	cin >> edad_Pedro;
	cout << "Introduzca la edad de Juan: ";
	cin >> edad_Juan;
	
	/*
	edad_Pedro = edad_Juan;
	edad_Juan = edad_Pedro;
	
	¿Por qué no funciona?
	El valor de edad_Juan se le asigna a edad_Pedro y esta pierde su antiguo valor
	por lo que al agignarla luego a la inversa edad_Pedro contiene el mismo valor que 
	edad_Juan.
	*/
	
	guardar_edad = edad_Pedro;
	edad_Pedro = edad_Juan;
	edad_Juan = guardar_edad;
	
	cout << "\nLa nueva edad de Pedro es " << edad_Pedro << " anios.\n";
	cout << "La nueva edad de Juan es " << edad_Juan << " anios.\n\n";
	
	system("pause");
}
