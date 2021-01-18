/*	Programa que llera 3 valores reales desde teclado y
	calculara el m�ximo de los 3 haciendo uso de una funci�n.
*/

#include <iostream>				//Inclusi�n de recursos E/S

using namespace std;

//Declaraci�n de funciones
double Max(double un_valor, double otro_valor, double el_tercero){
	double maximo;
	
	/*
	Si realizamos la lectura de teclado desde la funcion las variables que obtendremos
	seran de caracter formal, por ello solo serian utiles dentro de esa funci�n, y en 
	el caso que querer realizar otra operaci�n diferente con esos valores no tendremos
	acceso a ellos.
	*/
	
	/*
	cout << "Introduzca el primer valor: ";
	cin >> un_valor;
	cout << "Introduzca el segundo valor: ";
	cin >> otro_valor;
	cout << "Introduzca el tercer valor: ";
	cin >> el_tercero;
	*/
	
	if (un_valor < otro_valor)
		maximo = otro_valor;
	else
		maximo = un_valor;
	
	if (maximo < el_tercero)
		maximo = el_tercero;
		
	return maximo;
}

int main(){															//Programa principal
	double primer_real, segundo_real, tercer_real;		//Declaraci�n de variables de entrada
	double maximo;													//Declaraci�n de variables de salida

	cout << "Introduzca el primer valor: ";
	cin >> primer_real;
	cout << "Introduzca el segundo valor: ";
	cin >> segundo_real;
	cout << "Introduzca el tercer valor: ";
	cin >> tercer_real;

	
	maximo = Max(primer_real, segundo_real, tercer_real);
	
	cout << "\nEl maximo de los tres reales es " << maximo << ".\n\n";
	system("pause");
}
