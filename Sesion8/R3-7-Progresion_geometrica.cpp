/*	Programa que calculara la sumatoria y el producto hasta un valor
	tope y si la razon lo permite, la suma hasta infinito.
*/

#include <iostream>							//Inclusión recursos E/S
#include <cmath>								//Inclusión recursos matematicos

using namespace std;

//Declaración de funciones

/*
	La funcion calcula la sumatoria de los k terminos de una serie.
*/

double SumaHasta(double termino_inicio, double razon, int numero_veces){	
	double termino = termino_inicio;
	double suma_total = termino;
	
	for (int i = 2; i <= numero_veces ; i++){     
		termino = termino * razon;
		suma_total = suma_total +  termino;
	}
	return suma_total;
}

/*
	La función calculara el ultimo termino de la serie
*/

double UltimoTermino(double termino_inicio, double razon, int numero_veces){
	double termino = termino_inicio;
	
	for (int i = 2; i <= numero_veces ; i++){     
		termino = termino * razon;
	}
	return termino;
}

/*
	La función calculara el producto de los valores desde el inicial
	hasta el final de la serie.
*/

double ProductoHasta(double termino_inicio, double razon, int numero_veces){
	double producto;
	double termino_final;
	
	termino_final = UltimoTermino(termino_inicio, razon, numero_veces);
	producto = sqrt(pow((termino_inicio*termino_final), numero_veces));
	
	return producto;
}

/*
	la función calculara la sumatoria hasta infinito.
*/

double SumaHastaInfinito(double termino_inicio, double razon){
	double suma;
	
	suma = termino_inicio / (1 - razon);
	
	return suma;
}

int main(){																//Programa principal
	double termino_primero, razon;								//Declaración variables entrada
	int  indice_ultimo;
	double razon_absoluta;											//Declaración variables auxiliares
	double suma_total, producto_total, suma_infinito;		//Declaración variables salida

	cout << "Introduzca el primer termino de la progresion: ";
	cin >> termino_primero;
	cout << "Introduzca la razon de la progresion: ";
	cin >> razon;
	cout << "Introduzca el indice >= 1 del ultimo termino que quiere sumar: ";
	cin >> indice_ultimo;
	
	razon_absoluta = abs(razon);
	suma_total = SumaHasta(termino_primero, razon, indice_ultimo);
	producto_total = ProductoHasta(termino_primero, razon, indice_ultimo);
	
	cout << "\nLa suma hasta el k termino es " << suma_total << ".";
	cout << "\nEl producto hasta el k termino es " << producto_total << ".";
	
	if (razon_absoluta < 1){	
		suma_infinito = SumaHastaInfinito(termino_primero, razon);
	
		cout << "\nLa suma hasta infinito es " << suma_infinito << ".";
	}
	
	cout << "\n\n";
	system("pause");
}
