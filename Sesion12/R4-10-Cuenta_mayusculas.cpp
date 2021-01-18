/*	Programa que leera una cadena de caracteres y nos dira
	el numero de mayusculas de cada Letra que hay en dicha cadena,
	para finalizar la cadena usaremos '.'
*/

#include <iostream>									//Inclusión recursos E/S

using namespace std;

int main(){												//Programa principal
	const char TERMINADOR = '.';					//Declaración de variables constante
	const int TAMANIO = 'Z'-'A' + 1;
	int contador_mayusculas[TAMANIO] = {0};	//Declaración de vector
	char letra;											//Declaración de variable de entrada
	int indice;											//Declaración de variable auxiliares
	
	cout << "Introduzca una cadena de caracteres: ";
	cin >> letra;
	
	/*
		Algoritmo
	
		Un bucle lee la letra, di no es el terminador, comprobará que
		sea mayuscula, si es mayuscula se sumara 1 a la posicion correspondiente
		en el vector.
	*/
	while (letra != TERMINADOR){
		if ('A' <= letra && letra <= 'Z'){
			indice = letra - 'A';
			contador_mayusculas[indice] = contador_mayusculas[indice] + 1;
		}
		
		cin >> letra;
	}
	
	/*	Imprime las mayusculas y el numero de veces que aparecen en la cadena,
		solo aqueyas que aparecen*/
	for (int i = 0; i < TAMANIO; i++){
		char caracter;
		caracter = 'A' + i;
		
		if (contador_mayusculas[i] != 0)
			cout << "\nHay " << contador_mayusculas[i] << " " << caracter;
	}
	
	cout << "\n\n";
	system("pause");
}
