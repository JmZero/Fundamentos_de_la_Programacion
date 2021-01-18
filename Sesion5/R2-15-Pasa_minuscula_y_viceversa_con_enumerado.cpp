/* Programa para cambiar una letra mayuscula a minuscula y viceversa,
	en caso de no ser un caraacter alfabético se imprime el caracter 
	introducido.
	Realizado con enumerado.
*/

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

enum class TipoLetra
	{letra_mayuscula, letra_minuscula, caracter_no_alfabetico};

int main(){																		//Programa principal
	const string LETRA_SALIDA = "\nLa letra convertida es ";		//Declaración de constantes
	const int PASA_LETRA = ('a'-'A');
	char letra_original;														//Declaración de variable de entrada
	char letra_convertida;													//declaración de variable de salida
	TipoLetra letra;
	
	cout << "Introduzca el caracter: ";
	cin >> letra_original;
	
	if ('A' <= letra_original && letra_original <= 'Z'){
		letra_convertida = letra_original + PASA_LETRA;
		letra = TipoLetra::letra_mayuscula;
	}
	else{
		if ('a' <= letra_original && letra_original <= 'z'){
			letra_convertida = letra_original - PASA_LETRA;
			letra = TipoLetra::letra_minuscula;
		}
		else{
			letra_convertida = letra_original;
			letra = TipoLetra::caracter_no_alfabetico;
		}
	}
	
	switch (letra){
		case TipoLetra::letra_mayuscula:
			cout << "\nSe ha introducido una letra mayuscula.";
			cout << LETRA_SALIDA << letra_convertida << ".\n\n";
			break;
		case TipoLetra::letra_minuscula:
			cout << "\nSe ha introducido una letra minuscula.";
			cout << LETRA_SALIDA << letra_convertida << ".\n\n";
			break;
		case TipoLetra::caracter_no_alfabetico:
			cout << "\nNo se ha introducido un caracter alfabetico.";
			cout << "\n" << letra_convertida << " no se puede convertir.\n\n";
			break;
	}
	
	system("pause");
}
