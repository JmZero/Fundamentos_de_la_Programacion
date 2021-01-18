/* Programa que lee un entero e imprime los dígitos
	en pantalla separados por 3 espacios.
*/

#include<iostream>							//Inclusión recursos E/S

using namespace std;

int main(){										//Programa principal
	int valor_total;							//Declaración valor de entrada
	int valor1, valor2, valor3;			//Declaración valores de salida
	
	cout << "Introduzca el valor del entero (tres digitos): ";
	cin >> valor_total;
	
	valor1 = valor_total/100;
	valor2 = valor_total/10 - valor1*10;
	valor3 = valor_total - valor1*100 - valor2*10;
	
	cout << "\n" << valor1 << "   " << valor2 << "   " << valor3 << "\n\n";
	
	system("pause");
}
