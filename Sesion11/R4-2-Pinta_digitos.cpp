/*	Programa que imprimirá los dígitos del entero
	introducido separados por tres espacios usando 
	una función string.
*/

#include <iostream>				//Inclusión recursos E/S
#include <cmath>					//Inclusión recursos matemáticos

using namespace std;

/*	Función que conociendo un entero lo devuelve como
	un valor char*/
char PasaNumeroASCII(int entero){
	return entero + '0';
}

/*	Función que cuenta los digitos de entero introducido,
	despues los separa de dejando el primer numero de la cadena
	e introduciendo en un vector, que se introduce en un string
	junto con 3 espacios*/
string Digitos(int n){
	const int MAX_ENTEROS = 100;
	string cadena;
	int potencia = 0;
	int numero_copia = abs(n);
	int divisor, digito;
	char digitos[MAX_ENTEROS];
	int i = 0;
	
	do{
		numero_copia = numero_copia / 10;
		potencia++;
	}while (numero_copia > 0);
	
	do{
		if (n < 0)
			cout << "-";
		potencia--;
		divisor = pow(10, potencia);
		digito = abs(n) / divisor;
		digitos[i] = PasaNumeroASCII(digito);
		n = abs(n) % divisor;
		cadena = cadena + digitos[i] + "   ";
		i++;
	}while (n >= 0 && potencia > 0);
	
	return cadena;
}

int main(){							//Programa principal
	int entero;						//Declaración variable entrada
	string pinta_digitos;		//Declaración variable salida
	
	cout << "Introduzca una cadena de numeros: ";
	cin >> entero;
	
	pinta_digitos = Digitos(entero);
	cout << pinta_digitos << "\n\n";
	system("pause");
}
