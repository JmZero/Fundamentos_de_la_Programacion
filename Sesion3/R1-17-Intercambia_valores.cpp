/* Programa que intercambia los valores de x, y, z siendo x vale z,
	y vale x, z vale y.
*/

#include<iostream>											//Inclusión recursos E/S

using namespace std;

int main(){														//Programa principal.
	int x=10, y=20, z=30;									//Declaración variables entrada.
	int copia;													//Declaración variable auxiliar.
	
	cout << "Antes de la ejecucion, X vale " << x << ", Y vale " << y << ", Z vale " << z << "\n";
	
	copia = x;
	x = z;
	z = y;
	y = copia;
	
	cout << "Despues de la ejecucion, X vale " << x << ", Y vale " << y << ", Z vale " << z << "\n\n";
	system("pause");
}
