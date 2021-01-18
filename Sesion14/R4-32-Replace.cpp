/*	Programa para emular la función del replace de la clase
	string
*/

#include <iostream>							//Inclusión métodos E/S

using namespace std;

int main(){										//Programa principal
	const char TERMINADOR = '#';			//Declaración de constantes
	const int TAMANIO = 50;
	char cadena1[TAMANIO];					//Declaración de vectores
	char cadena2[TAMANIO];
	char caracter;								//Declaración de variables de entrada
	int pos_inicio, total_cambiados;
	int total_utilizados;					//Declaración de variables auxiliares
	int total_utilizados2;
	
	/*Introducción de datos*/
	cout << "Introduzca la cadena inicial: ";
	caracter = cin.get();
	
	for (total_utilizados=0; caracter != TERMINADOR; total_utilizados++){
		cadena1[total_utilizados] = caracter;
		
		caracter = cin.get();
	}
	
	cout << "Introduca la posicion desde la que desacambiar: ";
	cin >> pos_inicio;
	cout << "Introduzca el numero de caracteres a sustituir: ";
	cin >> total_cambiados;
	cout << "Introduzca la cadena cambio: ";
	cin >> caracter;
	
	for (total_utilizados2=0; caracter != TERMINADOR; total_utilizados2++){
		cadena2[total_utilizados2] = caracter;
		
		caracter = cin.get();
	}
	
	/* Algoritmo
		Se comprueba si los valores a eliminar son menos o mayores que el total
		de caracteres de cambio.
		Desplazara los valores dentro del primer vector para dejar o eliminar espacio.
		Se introduce los valores almacenados en el segundo vector en la posición indicada.
	*/
	if (total_utilizados2 > total_cambiados){
		int pos_lectura = total_utilizados-1;
	
		for (int pos_escritura = total_utilizados + total_utilizados2 - total_cambiados-1; pos_escritura > (pos_inicio + total_utilizados2-1); pos_escritura--){
			cadena1[pos_escritura] = cadena1[pos_lectura];
			pos_lectura--;
		}
	}
	else{
		int pos_escritura = pos_inicio + total_utilizados2;
		
		for (int pos_lectura = pos_inicio + total_cambiados; pos_lectura < total_utilizados; pos_lectura++){
			cadena1[pos_escritura] = cadena1[pos_lectura];
			pos_escritura++;
		}	
	}
	
	for (int i=0; i < total_utilizados2; i++){
		cadena1[pos_inicio] = cadena2[i];
		pos_inicio++;
	}
	
	total_utilizados = total_utilizados + total_utilizados2 - total_cambiados;
	
	cout << "\nLa nueva cadena es: ";
	
	for (int l=0; l < total_utilizados; l++){
		cout << cadena1[l];
	}
	
	cout << "\n\n";
	system("pause");
}
