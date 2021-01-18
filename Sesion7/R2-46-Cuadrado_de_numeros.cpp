/*	Programa que leera desde teclado un número inicial
	y un numero de filas. Nos mostrara en la salida un
	cuadrado con los valores correspondientes.
*/
#include <iostream>

using namespace std;

int main(){
	int inicial, filas;
	int inicial_copia, valor_maximo, tope_maximo;
	
		cout << "Introduzca el numero inicial: ";
		cin >> inicial;
		cout << "Introduzca el numero de filas: ";
		cin >> filas;
	
	/*
		Inicializamos el valor maximo al que de debe llegar.
		Inicializacemos el tope maximo del segundo bucle.
		
		El primer bucle calculara el valor de inicio de cada columna hasta 
		llegar al valor máximo.
		Al final del bucle aumentaremos donde debe acabar cada fila.
		El segundo bucle nos imprimirá los valores de la fila de cada columna
		hasta llegar al numero maximo de comumnas.	
	*/
	
	valor_maximo = inicial + filas -1;
	tope_maximo = valor_maximo;
	
	while (inicial <= valor_maximo){
		for(inicial_copia = inicial; inicial_copia <= tope_maximo; inicial_copia++){
			cout << inicial_copia << "  ";
		}
		inicial++;
		tope_maximo++; 
		cout << "\n\n";
	}
	
	system("pause");
}
