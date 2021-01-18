/* Programa que leera un entero y nos dira
	si es narcisista o no.
*/

#include <iostream>																			//Inclusión recursos E/S
#include <cmath>																				//Inclusión recursos matematicos

using namespace std;

int main(){																						//Programa principal
	int entero, digito, potencia;															//Declaración de variables
	int divisor, numero_copia, entero_introducido, suma, potencia_copia;
	
	cout << "Introduzca un entero: ";
	cin >> entero;
	
	suma = 0;																					//Inicialización de variables
	potencia = 0;
	numero_copia = entero;
	entero_introducido = entero;
	
	do{																							//Calculo de total de digitos
		numero_copia = numero_copia / 10;
		potencia++;
	}while (numero_copia > 0);
	
	potencia_copia = potencia;
	
	do{
		potencia_copia--;
		divisor = pow(10, potencia_copia);
		digito = entero / divisor;
		entero = entero % divisor;
		suma = suma + pow(digito, potencia);
	}while (entero >= 0 && potencia_copia > 0);
	
	if (entero_introducido == suma)
		cout << "El numero " << entero_introducido << " es narcisista.";
	else
		cout << "El numero " << entero_introducido << " no es narcisista.";
	
	
	cout << "\n\n";
	system("pause");
}
