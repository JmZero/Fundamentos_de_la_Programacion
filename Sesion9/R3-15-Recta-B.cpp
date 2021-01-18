/* Programa para calcular la pendiente y los
	coeficientes de una recta con clases y metodos.
*/

#include <iostream>											//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class Recta{
	public:
		double A = 0.0, B = 0.0, C = 0.0;
		
		//Método para calcular la pendiente
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

int main(){														//Programa principal
	Recta una_recta, otra_recta;							//Declaración de objetos
		double abscisa, ordenada;							//Declaración de variables de entrada
	double primera_pendiente, segunda_pendiente;		//Declaración de variables de salida

	
	cout << "Introduzca los valores de la primera recta:";
	cout << "\nA --> ";
	cin >> una_recta.A;
	cout << "B --> ";
	cin >> una_recta.B;
	cout << "C --> ";
	cin >> una_recta.C;
	
	cout << "\nIntroduzca los valores de la segunda recta:";
	cout << "\nA --> ";
	cin >> otra_recta.A;
	cout << "B --> ";
	cin >> otra_recta.B;
	cout << "C --> ";
	cin >> otra_recta.C;
	
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
