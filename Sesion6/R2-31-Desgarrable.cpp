/* Programa que comprobara si el número introducido
	es desgarrabla o no.
*/

#include <iostream>							//Inclusión recursos E/S
#include <cmath>								//Inclusion recursos matematicos

using namespace std;

int main(){										//Programa principal
	int entero;									//Declaración de variables
	int copia_entero, cuenta_digitos, derecha, entero_derecha, entero_izquierda, suma_enteros, divisor, termino_medio;
	double desgarrable;
	
	cout << "Introduzca el entero: ";
	cin >> entero;
	
	//Inicializacion de variables
	cuenta_digitos = 0;
	
	for (copia_entero = entero ; copia_entero > 0 ; cuenta_digitos++){
		copia_entero = copia_entero/10;
	}
	
	derecha = cuenta_digitos/2;
	termino_medio = cuenta_digitos - derecha;
	divisor = pow(10,termino_medio);
	entero_derecha = entero / divisor;
	entero_izquierda = entero % divisor;

	suma_enteros = entero_derecha + entero_izquierda;
	desgarrable = pow(suma_enteros,2);
	
	if (desgarrable == entero)
		cout << "\nEl numero " << entero << " es desgarrable.";
	else
		cout << "\nEl numero " << entero << " no es desgarrable.";
	
	cout << "\n\n";
	system("pause");
}
