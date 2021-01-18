/* Programa que leera desde teclado una base de una potencia 
	y un número al que sera elevada esta y calculara la potencia
	y el factorial del número introducido.
*/

#include <iostream>											//Inclusión recursos E/S

using namespace std;

int main(){														//Programa principal
	int numero;													//Declaración de variables de entrada
	double base;
	int numero_copia;											//Declaración de variables auxiliares
	int factorial;												//Declaracion devariabels de salida
	double potencia;
	
	cout << "Introduzca la base de la potencia: ";
	cin >> base;
	cout << "Introduzca el exponente de la potencia, del que calcularemos el factorial: ";
	
	do{
		cin >> numero;
	}while (numero < 0);
	
	//Inicialización de variables
	potencia = 1;							//Inicializamos a 1 para poder calcular en todo caso
	factorial = 1;							//Inicializamos a uno para que al introducir 0 la salida sea 1
	
	for (numero_copia = numero ; numero_copia > 0 ; numero_copia--){
		potencia = potencia * base;
		factorial = factorial * numero_copia;
	}
	
	cout << "\nEl resultado de la potencia de " << base << "^" << numero << " es " << potencia << ".";
	cout << "\nEl resultado del factorial de " << numero << " es " << factorial << ".\n\n";
	system("pause");
}
