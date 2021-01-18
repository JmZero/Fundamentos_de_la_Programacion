/*	Programa para transformar una caracter en mayuscula introducido
	por teclado en su equivalente en minuscula*/ 

#include<iostream>						//Inclusion recursos E/S

using namespace std;

int main(){									//Programa principal.
	const int cambio_letra = 32;		//Declaracion de variable constante.  Usaremos esto en lugar del "numero magico" ('a'-'A')
	char letra_mayuscula;				//Declaración variable de entrada.
	char letra_minuscula;				//Declaración variable de salida.
	
	cout << "Introduzca la un caracter (mayuscula): ";
	cin >> letra_mayuscula;
	
	letra_minuscula = letra_mayuscula + ('a'-'A');
	
	cout << "\nEl caracter introducido en minusculas es '" << letra_minuscula << "'.\n\n";
	system("pause");
}
