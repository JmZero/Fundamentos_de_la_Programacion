/* Programa que intercambia los valores de x, y, z siendo x vale z,
	y vale x, z vale y.
*/

#include<iostream>											//Inclusi�n recursos E/S

using namespace std;

int main(){														//Programa principal.
	int x=10, y=20, z=30;									//Declaraci�n variables entrada.
	int copia;													//Declaraci�n variable auxiliar.
	
	cout << "Antes de la ejecucion, X vale " << x << ", Y vale " << y << ", Z vale " << z << "\n";
	
	copia = x;
	x = z;
	z = y;
	y = copia;
	
	cout << "Despues de la ejecucion, X vale " << x << ", Y vale " << y << ", Z vale " << z << "\n\n";
	system("pause");
}
