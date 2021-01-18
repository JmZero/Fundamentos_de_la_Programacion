/*	Programa que creara una matriz simetrica original 
	de la cual introduciremos sus valores, y calculara
	la matriz suavizada.
*/

#include <iostream>				//Inclusión recursos E/S

using namespace std;

int main(){																					//Programa principal
	const int TAMANIO_MAX_FILAS = 50;												//Declaración de constantes
	const int TAMANIO_MAX_COLUMNAS = 30;
	double matriz_original[TAMANIO_MAX_FILAS][TAMANIO_MAX_COLUMNAS] = {{0}};		//Declaración de matrices reales
	double matriz_suavizada[TAMANIO_MAX_FILAS][TAMANIO_MAX_COLUMNAS] = {{0}};
	int numero_filas;																		//Declaración de variables de entrada
	
	do{
		cout << "Introduzca el numero de filas de la matriz original: ";
		cin >> numero_filas;
	}while (numero_filas > TAMANIO_MAX_COLUMNAS || numero_filas < 0);
	
	
	/*Algoritmo de introducción de valores de la matriz.
	
		EL metodo de introducción unicamente nos dejara introducir valores
		para rellenar el triángulo superior y la diagonal principal, de forma que
		cada vez que se introduzca un valor en la posición i,j ese mismo valor
		se pasara a la posición j,i de la matriz.
	*/
		
	cout << "Introduzca los valores de la matriz: \n";
	
	for (int i=0; i < numero_filas; i++){
		for (int j=i; j < numero_filas; j++){
			cin >> matriz_original[i][j];
			matriz_original[j][i] = matriz_original[i][j];
		}
	}
	
	/*Algoritmo matriz suavizada.
	
		EL metodo de introducción unicamente nos dejara introducir valores
		para rellenar el triángulo superior y la diagonal principal, donde 
		la diagonal principal es la misma y el triangulo superior es la suma
		de los valores de una posicion y sus siguientes.
	*/
	
	for (int i=0; i < numero_filas; i++){
		for (int j=i; j < numero_filas; j++){
			if (i == j){
				matriz_suavizada[i][j] = matriz_original[i][j];
			}
			else{
				int cuenta_valores = 0;
				for (int k=j; k < numero_filas; k++){
					matriz_suavizada[i][j] = matriz_suavizada[i][j] + matriz_original[i][k];
					cuenta_valores++;
				}
				matriz_suavizada[i][j] = matriz_suavizada[i][j] / cuenta_valores;
				matriz_suavizada[j][i ]= matriz_suavizada[i][j];
			}
		}
	}	
		
	cout << "\nLa matriz original: ";
	 
	for (int i=0; i < numero_filas; i++){
		cout << "\n";
		for (int j=0; j < numero_filas; j++){
			cout << matriz_original[i][j] << " ";		
		}
	}
	
	cout << "\n\n";
	cout << "La matriz suavizada: ";
	 
	for (int i=0; i < numero_filas; i++){
		cout << "\n";
		for (int j=0; j < numero_filas; j++){
			cout << matriz_suavizada[i][j] << "  ";	
		}
	}
	
	cout << "\n\n";
	system("pause");
}
