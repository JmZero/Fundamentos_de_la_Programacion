/* Programa para calcular la pendiente y los
	coeficientes de una recta con clases y metodos.
*/

#include <iostream>										//Inclusi�n recursos E/S

using namespace std;

//Definici�n de la clase
class Recta{
	private:													//Datos privados
		double A = 0.0, B = 0.0, C = 0.0;
	public:													//Datos publicos
		//Costructor de la clase
		Recta(double punto_A, double punto_B, double punto_C){
			SetCoeficientes(punto_A, punto_B, punto_C);
		}
		
		//M�todos Set para poder cambiar el valor
		//de las variables privadas y normales
		//para poder mostrarlas
		void SetCoeficientes(double punto_A, double punto_B, double punto_C){
			A = punto_A;
			B = punto_B;
			C = punto_C;
		}
		double PuntoA(){
			return A;
		}
		double PuntoB(){
			return B;
		}	
		double PuntoC(){
			return C;
		}
		
		//M�todo para calcular la pendiente de una recta
		double Pendiente(){
			return -A / B;
		}
		
		//M�todo para calcular la ordenada conociendo la abscisa
		double Ordenada(double abscisa){
			return (-C -abscisa*A)/B;
		}
		
		//M�todo para calcular la abscisa conociendo la ordenada
		double Abscisa(double ordenada){
			return (-C -ordenada*B)/A;
		}
		
};

int main(){																		//Programa principal
	double punto_a_primero, punto_b_primero, punto_c_primero;	//Declaraci�n de variables de entrada
	double punto_a_segundo, punto_b_segundo, punto_c_segundo;
	double abscisa, ordenada;
	double primera_pendiente, segunda_pendiente;						//Declaraci�n de variables de salida

	cout << "Introduzca los valores de la primera recta:";
	cout << "\nA --> ";
	cin >> punto_a_primero;
	cout << "B --> ";
	cin >> punto_b_primero;
	cout << "C --> ";
	cin >> punto_c_primero;
	
	cout << "\nIntroduzca los valores de la segunda recta:";
	cout << "\nA --> ";
	cin >> punto_a_segundo;
	cout << "B --> ";
	cin >> punto_b_segundo;
	cout << "C --> ";
	cin >> punto_c_segundo;
	
	Recta una_recta(punto_a_primero, punto_b_primero, punto_c_primero);	//Declaraci�n de objetos con constructor
	Recta otra_recta(punto_a_segundo, punto_b_segundo, punto_c_segundo);
	
	cout << "\nIntroduzca el valor de la abscisa:";
	cin >> abscisa;
	cout << "Introduzca el valor de la ordenada:";
	cin >> ordenada;
	
	una_recta.SetCoeficientes(punto_a_primero, punto_b_primero, punto_c_primero);
	otra_recta.SetCoeficientes(punto_a_segundo, punto_b_segundo, punto_c_segundo);
	
	primera_pendiente = una_recta.Pendiente();
	segunda_pendiente = otra_recta.Pendiente();
	
	cout << "\nLa pendiente de la primera recta es " << primera_pendiente << ".";
	cout << "\nLa pendiente de la segunda recta es " << segunda_pendiente << ".";
	cout << "\nEl valor de la ordenada para " << abscisa << " es " << una_recta.Ordenada(abscisa);
	cout << "\nEl valor de la ordenada para " << ordenada << " es " << una_recta.Abscisa(ordenada);
	
	cout << "\n\n";
	system("pause");
}
