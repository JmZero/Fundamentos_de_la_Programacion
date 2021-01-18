/* Programa para realizar una sumatoria sabiendo que aº = a * r^i-1
*/

#include <iostream>										//Inclusión de recursos E/S
#include <cmath>											//Inclusión de recursos matematicos

using namespace std;

int main(){													//Programa principal
	int razon, primer_elemento, elemento_tope;	//Declaración de variables de entrada
	int numero_elementos, exponente;					//Declaracion variables auxiliares y de salida
	long long int elemento, sumatoria;
	
	do{
		cout << "Introduzca los valores r, primer elemento y elemento tope: ";
		cin >> razon;
		cin >> primer_elemento;
		cin >> elemento_tope;
	}while (primer_elemento > elemento_tope);
	
	sumatoria = 0;
/*
	for (numero_elementos = 1; numero_elementos <= elemento_tope ; numero_elementos++){
		exponente = contador - 1;
		elemento = primer_elemento * pow(razon*1.0, exponente);
		sumatoria = sumatoria + elemento;
	}
*/
	
	elemento = primer_elemento;
	
	for (numero_elementos = 1; numero_elementos <= elemento_tope ; numero_elementos++){
		sumatoria = sumatoria + elemento;
		elemento = elemento * razon;
	}

	cout << "\nLa sumatoria de los primeros " << elemento_tope << " valores es " << sumatoria << ".\n\n";
	system("pause");
}
