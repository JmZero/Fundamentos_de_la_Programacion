/*	Programa que leera una cadena de caracteres,
	la almacenara en un vector, nos dira si es un
	palindromo o no, invierte el vector y nos dira
	cuantas mayusculas contine la cadena de caracteres.	
*/

#include <iostream>								//Inclusión recursos E/S

using namespace std;

int main(){											//Programa principal
	const char TERMINADOR = '#';				//Declaración de constantes
	const int MAX_CARACTERES = 100;
	char letras[MAX_CARACTERES];				//Declaración del vector
	char caracter;									//Declaración de variables de entrada
	char guarda_caracter;						//Declaración de variables auxiliares
	int total_utilizados = 0;
	int copia_total;
	int recorre_derecha, recorre_izquierda;
	int cuenta_mayusculas = 0;
	bool es_palindromo = true;
	
	cout << "Introduzca una secuencia de caracteres: ";
	caracter = cin.get();
	
	/*
		Algoritmo palindromo
		
		Un primer bucle leera los caracteres y los introducira en el vector
		hasta que llegue al terminador.
		Iniciamos las variables utiles.
		El segundo bucle recorrera el vector desde los extremos al centro y 
		comprovara si los caracteres son iguales.
	*/
	
	while(caracter != TERMINADOR && total_utilizados < MAX_CARACTERES){
		letras[total_utilizados] = caracter;
		
		caracter = cin.get();
		
		if (caracter != TERMINADOR)
			total_utilizados++;
	}
	
	recorre_derecha = 0;
	recorre_izquierda = total_utilizados;
	
	while (recorre_derecha <= total_utilizados/2 && total_utilizados/2 <= recorre_izquierda){
		if (letras[recorre_derecha] != letras[recorre_izquierda]){
			es_palindromo = false;
		}
		recorre_derecha++;
		recorre_izquierda--;
	}
	
	/*
		Algoritmo pra invertir vector.
		
		Inicializamos un valor auxiliar e intercambiamos
		los valores de la derecha con los de la izquierda 
		con un blucle hasta llegar al centro del vector.
	*/
	copia_total = total_utilizados;
	
	for(int i = 0; i <= total_utilizados/2; i++){
		guarda_caracter = letras[i];
		letras[i] = letras[copia_total];
		letras[copia_total] = guarda_caracter;
		copia_total--;		
	}
	
	/*
		Algoritmo cuenta mayusculas
		
		Un bucle leera el vector de un extremos a otro,
		de los espacios ocupados, y si hay una mayuscula,
		el contador aumenta 1.
	*/
		
	for(int i = 0; i <= total_utilizados; i++){
		if ('A' <= letras[i] && letras[i] <= 'Z')
			cuenta_mayusculas++;
	}
	
		
	if(es_palindromo)
		cout << "\nLa cadena es un palindromo";
	else
		cout << "\nLa cadena no es un palindromo";
	
	cout << "\n\n";
	
	/*
	Para imprimir el vector inverso
	
	for(int i = 0; i <= total_utilizados; i++){
		cout << letras[i];
	}
	*/
	
	cout << "Hay " << cuenta_mayusculas << " mayusculas en la cadena";
	cout << "\n\n";
	system("pause");
}
