/* Programa para calcular la gaussiana
	y la distribución acumulada haciendo
	uso de clases.
*/

#include <iostream>													//Inclusión recursos E/S
#include <cmath>														//Inclusión recursos matematicos

using namespace std;

//Declaración de funciones

/*	Función que calculara la potencia de un numero*/

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

//Definicón de la clase
class Gaussiana{
	private:										//Datos privados
		double esperanza = 0.0;
		double desviacion_tipica = 0.0;
		double abscisa = 0.0;
	public:										//Métodos públicos
		//Constructor de la clase
		Gaussiana(double valor_esperanza, double valor_desviacion,double valor_abscisa){
			SetDatosGaussiana(valor_esperanza, valor_desviacion, valor_abscisa);
		}
		
		/*	Método para asignarle valores a los datos privados*/
		void SetDatosGaussiana(double valor_esperanza, double valor_desviacion, double valor_abscisa){
			esperanza = valor_esperanza;
			desviacion_tipica = valor_desviacion;
			abscisa = valor_abscisa;
		}
		
		/*	Método que calculara la gaussiana*/
		double CalculaGaussiana(){
			const double PI = 3.1415927;
			double tipificacion, exponente, gaussiana;
			
			tipificacion = ((abscisa-esperanza)/desviacion_tipica);	
			exponente = (-0.5*tipificacion*tipificacion);
			gaussiana = (1/(desviacion_tipica*sqrt(2*PI))) * exp(exponente);
			
			return gaussiana;
		}
		
		/*	Método que calculara la distribución acumulada haciendo uso
			de los métodos previamente definidas.						*/
		double DistrubucionAcumulada(){		
			const double b0 = 0.2316419, b1 = 0.319381530, b2 = -0.356563782, 
				          b3 = 1.781477937, b4 = -1.821255978, b5 = 1.330274429;
			double area_hasta;
			double t;
		
			t = 1 / (1 + b0 * abscisa);
			area_hasta = 1 - CalculaGaussiana() * (b1*t + b2*Potencia(t,2) + b3*Potencia(t,3) + b4*Potencia(t,4) + b5*Potencia(t,5));
		
			return area_hasta;
		}
};

int main(){																//Programa principal
	int n;																//Declaración variables entrada
	double valor_abscisa, valor_esperanza, desviacion;
	
	cout << "Introduzca el valor de la esperanza: ";
	cin >> valor_esperanza;
	cout << "Introduzca el valor de la desviacion: ";
	cin >> desviacion;
	cout << "Introduzca el numero de abscisas que desea calcular: ";
	cin >> n;
	
	while (n > 0){
		cout << "Introduzca el valor de la abscisa: ";
		cin >> valor_abscisa;
	
		Gaussiana una_gaussiana(valor_esperanza, desviacion, valor_abscisa);
		
		cout << "\nEl valor de la gaussiana para la abscisa " << valor_abscisa << " es:" << una_gaussiana.CalculaGaussiana();
		cout << "\nEl valor de la distribucion para el valor " << valor_abscisa << " es:" << una_gaussiana.DistrubucionAcumulada();
		cout << "\n\n";
		n--;
	}
	system("pause");
}
