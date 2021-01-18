/* Programa para calcular el área y la longitud
   de una circunferencia.
   Necesitamos: radio, PI.
   Calculamos: area, longitud.
*/

#include <iostream>

using namespace std;

int main(){																	//Programa principal
	const double PI = 3.1416;											//Valor constante PI
	double radio;															//Valor de entrada
	double longitud;														//Valores de salida
	double area;
	
	cout << "Introduzca el valor del radio del circulo: ";
	cin >> radio;
	
	longitud = 2*PI*radio;
	area = PI*(radio*radio);
	
	cout << "\nLa longitud del cilindro es: " << longitud;
	cout << "\n\nEl area del circulo es: " << area << "\n\n";
	
	system("pause");
}
