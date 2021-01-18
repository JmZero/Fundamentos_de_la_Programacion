/* Programa para calcular el voltaje.
   Necesita:Intensidad y Resistencia.
   Aplicamos la ley de Ohm.
   Voltaje=Intensidad*resistencia
*/

#include <iostream>				// Inclusión de recursos E/S

using namespace std;

int main(){														// Programa principal
	double resistencia, intensidad, voltaje;			// Declaración de variables
	
	cout << "Introduzca el valor de la intensidad: ";
	cin >> intensidad;
	cout << "\nIntroduzca el valor de la resistencia: ";
	cin >> resistencia;
	
	voltaje = intensidad*resistencia;
	
	cout << "\nEl valor del voltaje es: " << voltaje << "\n\n";
	
	system("pause");
}
