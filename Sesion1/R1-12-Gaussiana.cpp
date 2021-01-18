/* Programa para calcular la gaussiana.
	Necesitamos: abscisa, desviacion, esperanza.
	Calculamos: gaussiana.
*/

#include <iostream>													//Inclusi�n recursos E/S
#include <cmath>														//Inclusi�n recursos matematicos

using namespace std;

int main(){																//Programa principal
	const double PI = 3.1415927;									//Declaraci�n constante PI
	double abscisa, esperanza, desviacion;						//Declaraci�n variables entrada
	double gaussiana;													//Declaraci�n variable salida
	double tipificacion, exponente;								//Declaraci�n de variables de paso
	
	cout << "Introduzca el valor de la abscisa: ";
	cin >> abscisa;
	cout << "Introduzca el valor de la esperanza: ";
	cin >> esperanza;
	cout << "Introduzca el valor de la desviacion: ";
	cin >> desviacion;
	
	tipificacion = ((abscisa-esperanza)/desviacion);
	
	exponente = (-0.5*tipificacion*tipificacion);
	
	gaussiana = (1/(desviacion*sqrt(2*PI))) * exp(exponente);
	
	cout << "El valor de la gaussiana es: " << gaussiana << "\n\n";
	
	system("pause");
}
