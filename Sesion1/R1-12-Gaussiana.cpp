/* Programa para calcular la gaussiana.
	Necesitamos: abscisa, desviacion, esperanza.
	Calculamos: gaussiana.
*/

#include <iostream>													//Inclusión recursos E/S
#include <cmath>														//Inclusión recursos matematicos

using namespace std;

int main(){																//Programa principal
	const double PI = 3.1415927;									//Declaración constante PI
	double abscisa, esperanza, desviacion;						//Declaración variables entrada
	double gaussiana;													//Declaración variable salida
	double tipificacion, exponente;								//Declaración de variables de paso
	
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
