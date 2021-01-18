/* Programa para calcular la pendiente de una
	recta con clases.
*/

#include <iostream>											//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class Recta{
	public:
		double A = 0.0, B = 0.0, C = 0.0;
};

int main(){														//Programa principal
	Recta una_recta, otra_recta;							//Declaración de objetos
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
	
	primera_pendiente = - una_recta.A / una_recta.B;
	segunda_pendiente = - otra_recta.A / otra_recta.B;
	
	cout << "\nLa pendiente de la primera recta es " << primera_pendiente << ".";
	cout << "\nLa pendiente de la segunda recta es " << segunda_pendiente << ".\n\n";
	
	system("pause");
}
