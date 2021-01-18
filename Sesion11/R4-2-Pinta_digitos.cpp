/*	Programa que imprimir� los d�gitos del entero
	introducido separados por tres espacios usando 
	una funci�n string.
*/

#include <iostream>				//Inclusi�n recursos E/S
#include <cmath>					//Inclusi�n recursos matem�ticos

using namespace std;

/*	Funci�n que conociendo un entero lo devuelve como
	un valor char*/
char PasaNumeroASCII(int entero){
	return entero + '0';
}

/*	Funci�n que cuenta los digitos de entero introducido,
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
	int entero;						//Declaraci�n variable entrada
	string pinta_digitos;		//Declaraci�n variable salida
	
	cout << "Introduzca una cadena de numeros: ";
	cin >> entero;
	
	pinta_digitos = Digitos(entero);
	cout << pinta_digitos << "\n\n";
	system("pause");
}
