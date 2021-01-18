/*	Programa que leera desde teclado un número inicial
	y un numero de filas. Nos mostrara en la salida un
	triangulo con los valores correspondientes.
*/
#include <iostream>

using namespace std;

int main(){
	int inicial, filas;
	int inicial_copia, valor_maximo;
	
		cout << "Introduzca el numero inicial: ";
		cin >> inicial;
		cout << "Introduzca el numero de filas: ";
		cin >> filas;
	
	/*
		Inicializamos el valor maximo al que de debe llegar.
		
		El primer bucle calculara el valor de inicio de cada columna hasta 
		llegar al valor máximo.
		El segundo bucle nos imprimirá los valores de la fila de cada columna
		hasta llegar al valor máximo.
		
	*/
	
	valor_maximo = inicial + filas -1;
	
	while (inicial <= valor_maximo){
		for(inicial_copia = inicial; inicial_copia <= valor_maximo; inicial_copia++){
			cout << inicial_copia << "  ";
		}
		inicial++;
		cout << "\n\n"; 
	}
	
	system("pause");
}
