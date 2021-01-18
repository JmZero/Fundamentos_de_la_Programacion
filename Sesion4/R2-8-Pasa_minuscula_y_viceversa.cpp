/* Programa para cambiar una letra mayuscula a minuscula y viceversa,
	en caso de no ser un caraacter alfabético se imprime el caracter 
	introducido.
*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){																		//Programa principal
	const string LETRA_SALIDA = "\nLa letra convertida es ";		//Declaración de constantes
	const int PASA_LETRA = ('a'-'A');
	char letra_original;														//Declaración de variable de entrada
	char letra_convertida;													//declaración de variable de salida
	
	cout << "Introduzca el caracter: ";
	cin >> letra_original;
	
	if ('A' <= letra_original && letra_original <= 'Z'){
		letra_convertida = letra_original + PASA_LETRA;
		cout << "\nSe ha introducido una letra mayuscula.";
		cout << LETRA_SALIDA << letra_convertida << ".\n\n";
	}
	else{
		if ('a' <= letra_original && letra_original <= 'z'){
			letra_convertida = letra_original - PASA_LETRA;
			cout << "\nSe ha introducido una letra minuscula.";
			cout << LETRA_SALIDA << letra_convertida << ".\n\n";
		}
		else{
			letra_convertida = letra_original;
			cout << "\nNo se ha introducido un caracter alfabetico.";
			cout << "\n" << letra_convertida << " no se puede convertir.\n\n";
		}
	}
	
	system("pause");
}
