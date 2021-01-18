/* Programa que leera desde teclado una base de una potencia 
	y un número al que sera elevada esta y calculara la potencia
	y el factorial del número introducido.
*/

#include <iostream>											//Inclusión recursos E/S

using namespace std;

//Declaración de funciones
int LeeEnteroPositico(){
	int entero;
	
	do{
		cin >> entero;
	}while (entero < 0);
	return entero;
}

double CalculaPotencia (double base, int exponente){
	double potencia = 1;
	int i;
	
	for (i=1; i <= exponente; i++){
		potencia = potencia * base;
	}
	return potencia;
}

long long CalculaFactorial(int numero){
	long long factorial = 1;
	int multiplicando;
	
	for (multiplicando = 2; multiplicando <= numero; multiplicando++){
		factorial = factorial * multiplicando;
	}
	return factorial;
}
	
int main(){														//Programa principal
	int numero;													//Declaración de variables de entrada
	double base;
	int factorial;												//Declaracion devariabels de salida
	double potencia;
	
	cout << "Introduzca la base de la potencia: ";
	cin >> base;
	cout << "Introduzca el exponente de la potencia, del que calcularemos el factorial: ";
	numero = LeeEnteroPositico();
	
	potencia = CalculaPotencia(base, numero);
	factorial = CalculaFactorial(numero);
	
	cout << "\nEl resultado de la potencia de " << base << "^" << numero << " es " << potencia << ".";
	cout << "\nEl resultado del factorial de " << numero << " es " << factorial << ".\n\n";
	system("pause");
}
