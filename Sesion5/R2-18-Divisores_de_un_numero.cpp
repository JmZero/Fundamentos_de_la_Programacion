/*	Programa que lee un entero tope desde teclado
	y muestra en pantalla todos sus divisores propios.
*/

#include <iostream>									//Includión recursos E/S

using namespace std;

int main(){												//Programa principal
	int tope;											//Declaración de variables
	int divisor;
	
	cout << "Introduzca el entero del que desea conocer sus divisores: ";
	
	do{													//Bucle testeo de entrada (comprobar que sea positivo)
		cin >> tope;
	}while (tope < 0);
	
	divisor = 1;
	
	while (divisor <= tope){
		if (tope % divisor == 0)
			cout << "\n" << divisor << " es un divisor propio de " << tope;
		divisor++;
	}
	
	cout << "\n\n";
	system("pause");
}
