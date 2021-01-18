/* Programa para cambiar una letra mayuscula a minuscula que 
	mientras no se introduzca una mayúscula pedira la introducción
	de un caracter.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main(){																		//Programa principal
	const int PASA_LETRA = ('a'-'A');									//Declaración de constantes
	char letra_original;														//Declaración de variable de entrada
	char letra_convertida;													//declaración de variable de salida
	
	cout << "Introduzca el caracter: ";
	
	do{
		cin >> letra_original;
	}while ('A' > letra_original || letra_original > 'Z');
	
	letra_convertida = letra_original + PASA_LETRA;

	cout << "La letra converida es " << letra_convertida << ".\n\n";
	
	system("pause");
}
