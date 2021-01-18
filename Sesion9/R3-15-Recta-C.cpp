/* Programa para calcular la pendiente y los
	coeficientes de una recta con clases y metodos.
*/

#include <iostream>										//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class Recta{
	private:											//Datos privados
		double A = 0.0, B = 0.0, C = 0.0;
	public:										//Datos publicos
		//Métodos Set para poder cambiar el valor
		//de las variables privadas y normales
		//para poder mostrarlas
		void SetPuntoA(double punto_A){
			A = punto_A;
		}
		double PuntoA(){
			return A;
		}
		
		void SetPuntoB(double punto_B){
			B = punto_B;
		}		
		double PuntoB(){
			return B;
		}
		
		void SetPuntoC(double punto_C){
			C = punto_C;
		}		
		double PuntoC(){
			return C;
		}
		
		//Método para calcular la pendiente de una recta
		double Pendiente(){
			return -A / B;
		}
		
		//Método para calcular la ordenada conociendo la abscisa
		double Ordenada(double abscisa){
			return (-C -abscisa*A)/B;
		}
		
		//Método para calcular la abscisa conociendo la ordenada
		double Abscisa(double ordenada){
			return (-C -ordenada*B)/A;
		}
		
};

int main(){																		//Programa principal
	Recta una_recta, otra_recta;											//Declaración de objetos
	double punto_a_primero, punto_b_primero, punto_c_primero;	//Declaración de variables de entrada
	double punto_a_segundo, punto_b_segundo, punto_c_segundo;
	double abscisa, ordenada;
	double primera_pendiente, segunda_pendiente;						//Declaración de varables de salida
	
	
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
	
	una_recta.SetPuntoA(punto_a_primero);
	una_recta.SetPuntoB(punto_b_primero);
	una_recta.SetPuntoC(punto_c_primero);
	
	otra_recta.SetPuntoA(punto_a_segundo);
	otra_recta.SetPuntoB(punto_b_segundo);
	otra_recta.SetPuntoC(punto_c_segundo);
	
	primera_pendiente = una_recta.Pendiente();
	segunda_pendiente = otra_recta.Pendiente();
	
	cout << "\nLa pendiente de la primera recta es " << primera_pendiente << ".";
	cout << "\nLa pendiente de la segunda recta es " << segunda_pendiente << ".\n\n";
		
	cout << "\nIntroduzca el valor de la abscisa:";
	cin >> abscisa;
	cout << "El valor de la ordenada es " << una_recta.Ordenada(abscisa);
	
	cout << "\n\nIntroduzca el valor de la ordenada:";
	cin >> ordenada;
	cout << "El valor de la ordenada es " << una_recta.Abscisa(ordenada);
	
	cout << "\n\n";
	system("pause");
}
