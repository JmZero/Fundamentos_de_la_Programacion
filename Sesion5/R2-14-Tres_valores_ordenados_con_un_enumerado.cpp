/* Programa que lee 3 valores y nos 
	dira como estan ordenados.
	Realizado con un enumerado.
*/

#include <iostream>													//Inclusión recursos E/S

using namespace std;

enum class TipoOrden
	{orden_creciente, orden_decreciente, ningun_orden};	//Declaración enumerado

int main(){																//Programa principal
	int valor1, valor2, valor3;									//Declaración de variables
	TipoOrden orden;
	
	cout << "Introduzca el primer valor: ";
	cin >> valor1;
	cout << "Introduzca el segundo valor: ";
	cin >> valor2;
	cout << "Introduzca el tercer valor: ";
	cin >> valor3;
	
	if (valor1 < valor2 && valor2 < valor3)
		orden = TipoOrden::orden_creciente;
	else
		if (valor1 > valor2 && valor2 > valor3)
			orden = TipoOrden::orden_decreciente;
		else
			orden = TipoOrden::ningun_orden;

	switch (orden){
		case TipoOrden::orden_creciente:
			cout << "\nEl orden es creciente.";
			break;
		case TipoOrden::orden_decreciente:
			cout << "\nEl orden es decreciente.";
			break;
		case TipoOrden::ningun_orden:
			cout << "\nNo tiene orden.";
			break;
	}
	cout << "\n\n";
	system ("pause");
}
