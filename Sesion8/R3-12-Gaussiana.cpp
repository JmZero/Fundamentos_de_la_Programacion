/* Programa para calcular la gaussiana
	y la distribución acumulada
*/

#include <iostream>													//Inclusión recursos E/S
#include <cmath>														//Inclusión recursos matematicos

using namespace std;

//Declaración de funciones

/*
	Función que calculara la potencia de un numero.
*/

double Potencia (double base, int exponente){
	double provoca_indeterminacion = 0.0;
	double NaN = provoca_indeterminacion/provoca_indeterminacion;
	double potencia;
	int exponente_positivo;

	if (base == 0 && exponente == 0)
		potencia = NaN;				// Devuelve NaN (Indeterminación)
	else{
		exponente_positivo = abs(exponente);
		potencia = 1;								   					

		for (int i = 1; i <= exponente_positivo; i++)
			potencia = potencia * base;
	}

	if (exponente < 0)
		potencia = 1/potencia;

	return potencia;
}

/*
	Función que calculara la gaussiana conociendo la esperanza,
	la desviacion y la abscisa.
*/

double Gaussiana(double esperanza, double desviacion, double abscisa){
	const double PI = 3.1415927;
	double tipificacion, exponente, gaussiana;
	
	tipificacion = ((abscisa-esperanza)/desviacion);	
	exponente = (-0.5*tipificacion*tipificacion);
	gaussiana = (1/(desviacion*sqrt(2*PI))) * exp(exponente);
	
	return gaussiana;
}

/*
	Función que calculara la distribución acumulada haciendo uso
	de las funciones previamente definidas.
*/

double DistrubucionAcumulada(double esperanza, double desviacion, double x){		
	const double b0 = 0.2316419, b1 = 0.319381530, b2 = -0.356563782, 
		          b3 = 1.781477937, b4 = -1.821255978, b5 = 1.330274429;
	double area_hasta;
	double t;

	t = 1 / (1 + b0 * x);
	area_hasta = 1 - Gaussiana(esperanza, desviacion, x) * (b1*t + b2*Potencia(t,2) + b3*Potencia(t,3) + b4*Potencia(t,4) + b5*Potencia(t,5));

	return area_hasta;
}

int main(){																//Programa principal
	int n;																//Declaración variables entrada
	double abscisa, esperanza, desviacion;
	double gaussiana, distribucion;								//Declaración variable salida
	
	cout << "Introduzca el valor de la esperanza: ";
	cin >> esperanza;
	cout << "Introduzca el valor de la desviacion: ";
	cin >> desviacion;
	cout << "Introduzca el numero de abscisas que desea calcular: ";
	cin >> n;
	
	while (n > 0){
		cout << "Introduzca el valor de la abscisa: ";
		cin >> abscisa;
	
		gaussiana = Gaussiana(esperanza, desviacion, abscisa);
		distribucion = DistrubucionAcumulada(esperanza, desviacion, abscisa);
		
		cout << "\nEl valor de la gaussiana para la abscisa " << abscisa << " es:" << gaussiana;
		cout << "\nEl valor de la distribucion para el valor " << abscisa << " es:" << distribucion;
		cout << "\n\n";
		n--;
	}
	system("pause");
}
