/* Programa para cambiar una letra mayuscula a minuscula,
	en caso de no ser mayuscula se imprime el caracter introducido.
*/

#include <iostream>								
#include <cctype>

using namespace std;

int main(){												//Programa principal
	const int PASA_MINUSCULA = ('a'-'A');		//Declaración de constantes
	char letra_original;								//Declaración de variable de entrada
	char letra_convertida;							//Declaración de variable de salida
	
	cout << "Introduzca el caracter: ";
	cin >> letra_original;
	
	if ('A' <= letra_original && letra_original <= 'Z'){
		letra_convertida = letra_original + PASA_MINUSCULA;
		cout << "\nLa letra convertida es " << letra_convertida << ".\n\n";
	}
	else{
		letra_convertida = letra_original;
		cout << "\n" << letra_convertida << " no se puede convertir.\n\n";
	}
	
	system("pause");
}
