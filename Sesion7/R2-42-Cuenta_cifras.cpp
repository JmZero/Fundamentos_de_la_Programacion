/*	Programa que calculara las veces que se repite un número
	dado desde teclado, dentro de los numeros de un intervalo.
*/

#include <iostream>															//Inclusión recursos E/S

using namespace std;

int main(){																		//Programa principal
	int cifra;																	//Declaración de variables de entrada
	int minimo, maximo;
	int digito, copia_numero, numero, cuenta_repeticiones;		//Declaración de variables auxiliares
	
	cout << "Introduzca la cifra: ";
	cin >> cifra;
	cout << "Introduzca el valor minimo del intervalo: ";
	cin >> minimo;
	cout << "Introduzca el valor maximo del intervalo: ";
	cin >> maximo;
	
	/*
		Iniciamos el contador a 0.
		El primer bucle cuenta los numeros del min al maximo.
		El segundo bucle dividira el numero del primer bucle 
		en cada cifra y comprobara si es igual al que se quiere
		conocer. Si lo es el contador aumenta.
	*/
	cuenta_repeticiones = 0;
		
	for (numero = minimo; numero <= maximo; numero++){
		copia_numero = numero;
		do{
			digito = copia_numero % 10;
			copia_numero = copia_numero / 10;
			
			if (digito == cifra)
		 	cuenta_repeticiones++;
		}while (copia_numero > 0);
	}
	
	cout << "\nEl numero " << cifra << " se repite en el intervalo " << cuenta_repeticiones << " veces.\n\n" ;
	system("pause");
}
