/* Programa que lee 3 valores y nos 
	dira como estan ordenados.
	Hecho por separación E/S.
*/

#include <iostream>												//Inclusión recursos E/S

using namespace std;

int main(){															//Programa principal
	int valor1, valor2, valor3;								//Declaración de variables
	bool orden_creciente, orden_decreciente, orden;
	
	cout << "Introduzca el primer valor: ";
	cin >> valor1;
	cout << "Introduzca el segundo valor: ";
	cin >> valor2;
	cout << "introduzca el tercer valor: ";
	cin >> valor3;
	
	orden_creciente = valor1 >= valor2 && valor2 >= valor3;
	orden_decreciente = valor1 <= valor2 && valor2 <= valor3;
	orden = orden_creciente || orden_decreciente;
	
	if (orden)
		cout << "\nLos valores estan ordenados.\n\n";
	else
		cout << "\nLos valores no estan ordenados.\n\n";
	
	system ("pause");
}
