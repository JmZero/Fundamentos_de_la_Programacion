/* Programa que lee un entero e imprime los d�gitos
	en pantalla separados por 3 espacios.
*/

#include<iostream>							//Inclusi�n recursos E/S

using namespace std;

int main(){										//Programa principal
	int valor_total;							//Declaraci�n valor de entrada
	int valor1, valor2, valor3;			//Declaraci�n valores de salida
	
	cout << "Introduzca el valor del entero (tres digitos): ";
	cin >> valor_total;
	
	valor1 = valor_total/100;
	valor2 = valor_total/10 - valor1*10;
	valor3 = valor_total - valor1*100 - valor2*10;
	
	cout << "\n" << valor1 << "   " << valor2 << "   " << valor3 << "\n\n";
	
	system("pause");
}
