/* Programa que leera desde teclado unos valores de derecha
	e izquierda minimos y otros maximos para mostrarnos en
	pantalla una matriz donde cada columna cambia los valores
	de la derecha del menor al mayor, y cada fila cambiaria 
	los valores de la izquierda del menor al mayor.
*/
	
#include <iostream>											//Inclusión de recursos E/S

using namespace std;

int main(){														//Programa principal
	char min_izda, min_dcha, max_izda, max_dcha;		//Declaración de variables
	char min_dcha_copia;										//Declaración de variables auxiliares
	
	//Test de valores de entrada
	
	do{
		cout << "Introduzca el minimo de la izquierda: ";
		cin >> min_izda;
		cout << "Introduzca el maximo de la izquierda: ";
		cin >> max_izda;
	}while (min_izda > max_izda);
	
	cout << "\n";
	
	do{
		cout << "Introduzca el minimo de la derecha: ";
		cin >> min_dcha;
		cout << "Introduzca el maximo de la derecha: ";
		cin >> max_dcha;
	}while (min_dcha > max_dcha);
	
	cout << "\n";
	
	/*
	Un primer bucle comprueba los valores de la izquierda, dentro de este,
	un segundo bucle comprobara los valores de la derecha e imprimira 
	los valores.
	Cada vez que el segundo bucle imprima el valor de la derecha aumenta,
	cuando no pueda aumentar mas, aumentara del valor de la izquierda, y 
	volvera a empezar el segundo bucle.
	*/
	
	while (min_izda <= max_izda){
		for (min_dcha_copia = min_dcha; min_dcha_copia <= max_dcha; min_dcha_copia++){
			cout << min_izda << min_dcha_copia << "  ";
		}
		min_izda++;
		cout << "\n\n";
	}
	
	system("pause");
}
