/*	Programa para crear una matriz, imprimirla la original y su transpuesta,
	ademas introducir una segunda matriz para multiplicar por la original y
	si es posible calcular su resultado.
*/

#include <iostream>						//Inclusión recursos E/S

using namespace std;

int main(){									//Programa principal
	int util_filas;						//Declaración de variables entrada
	int util_columnas;
	int util_filas_multiplica;
	int util_columnas_multiplica;
	bool se_multiplican = true;		//Declaración de variables auxiliares
	
	cout << "Introduce el numero de filas de la matriz: ";
	cin >> util_filas;
	
	cout << "Introduzca el numero de columnas de la matriz: ";
	cin >> util_columnas;
	cout << "\n";
	
	/*	Algoritmo E/S matriz original
			
			Se inicializa la matriz con los valores leidos con anterioridad.
			Dos bucles anidados leen las componentes una a una.
			Otros 2 bucles imprimen las componentes a modo de matriz.
	*/
	int matriz_original[util_filas][util_columnas];
	
	for (int i=0; i < util_filas; i++){
		for (int j=0; j < util_columnas; j++){
			cout << "Introduzca el valor de la componente [" << i << "," << j << "]: ";
			cin >> matriz_original[i][j];
		}
	}
	
	cout << "\nLa matriz original es:\n";
	
	for (int i=0; i < util_filas; i++){
		for (int j=0; j < util_columnas; j++){
			cout << matriz_original[i][j] << " ";
		}
		cout << "\n";
	}
	
	/*	Algoritmo E/S matriz transpuesta
			
			Se inicializa la matriz con los valores leidos con anterioridad pero cambiando
			filas con columnas y viceversa.
			Dos bucles anidados leen las componentes una a una equivalentes a las posiciones
			de la matriz original.
			Otros 2 bucles imprimen las componentes a modo de matriz.
	*/
	int matriz_transpuesta[util_columnas][util_filas];
	
	for (int i=0; i < util_columnas; i++){
		for (int j=0; j < util_filas; j++){
			matriz_transpuesta[i][j] = matriz_original[j][i];
		}
	}
	
	cout << "\nLa matriz transpuesta es:\n";
	
	for (int i=0; i < util_columnas; i++){
		for (int j=0; j < util_filas; j++){
			cout << matriz_transpuesta[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << "Introduce el numero de filas de la matriz para multiplicar: ";
	cin >> util_filas_multiplica;
	
	cout << "Introduzca el numero de columnas de la matriz para multiplicar: ";
	cin >> util_columnas_multiplica;
	cout << "\n";
	
	/*	Algoritmo E/S matrices multiplica y resultado
			
			Se inicializa la matriz con los valores leidos con anterioridad.
			Dos bucles anidados leen las componentes una a una.
			Se inicializa la matriz resultado.
			Dos bucles anidados leen las componentes una a una.
			Si son compatibles se multiplicaran, si no, la variable se multiplica 
			cambia a false
			Otros 2 bucles imprimen las componentes a modo de matriz si se cumple 
			que se multiplican, si no, imprime un error.
	*/
	int matriz_multiplica[util_filas_multiplica][util_columnas_multiplica];
	
	for (int i=0; i < util_filas_multiplica; i++){
		for (int j=0; j < util_columnas_multiplica; j++){
			cout << "Introduzca el valor de la componente [" << i << "," << j << "]: ";
			cin >> matriz_multiplica[i][j];
		}
	}
	
	int matriz_resultado[util_filas][util_columnas_multiplica];
	
	for (int i=0; i < util_filas; i++){
		for (int j=0; j < util_columnas_multiplica; j++){
			matriz_resultado[i][j] = 0;
		}
	}
	
	if (util_filas == util_columnas_multiplica && util_columnas == util_filas_multiplica){
		for (int i=0; i < util_filas; i++){
			for (int j=0; j < util_columnas_multiplica; j++){
				for(int k=0; k < util_filas_multiplica; k++){
					matriz_resultado[i][j] = matriz_resultado[i][j] + matriz_original[i][k] * matriz_multiplica[k][i];
				}
			}
		}
	}
	else
		se_multiplican = false;
	
	if (se_multiplican){
		cout << "\nLa matriz resultado es:\n";
	
		for (int i=0; i < util_filas; i++){
			for (int j=0; j < util_columnas_multiplica; j++){
				cout << matriz_resultado[i][j] << " ";
			}
			cout << "\n";
		}
	}
	else
		cout << "\nLas matrices no se pueden multiplicar.";
	
	cout << "\n\n";
	system("pause");
}
