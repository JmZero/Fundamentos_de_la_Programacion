/*	Programa que leera una cadena de caracteres y nos dira
	el numero de mayusculas de cada Letra que hay en dicha cadena,
	para finalizar la cadena usaremos '.'. Hecho con una clase.
*/

#include <iostream>									//Inclusi�n recursos E/S

using namespace std;

//Definici�n de la clase
class ContadorMayusculas{
	private:				//Datos miembros y m�todos privados
		static const int TAMANIO = 'Z'-'A' + 1;
		int contador_mayusculas[TAMANIO] = {0};
		
		/*M�todo para comprobar si la letra es mayuscula*/
		bool EsMayuscula(char letra){
			return 'A' <= letra && letra <= 'Z';
		}
	public:				//M�todos p�blicos
		/*Metodo para incrementar la cantidad de veces que se introduce una mayuscula*/
		void IncrementoConteo(char mayuscula){
			int i;
			
			if (EsMayuscula(mayuscula)){
				i = mayuscula - 'A';
				contador_mayusculas[i] = contador_mayusculas[i] + 1;
			}
		}
		
		/*Metodo para mostrar la cantidad de veces que se repite la mayuscula introducida como parametro*/
		int CuantasHay(char mayuscula){
			int posicion = mayuscula - 'A';
			
			return contador_mayusculas[posicion];
		}
};
			

int main(){												//Programa principal
	ContadorMayusculas una_letra;
	static const char TERMINADOR = '.';			//Declaraci�n de variables constante
	char letra;											//Declaraci�n de variable de entrada
	
	cout << "Introduzca una cadena de caracteres: ";
	cin >> letra;
	
	while (letra != TERMINADOR){
		una_letra.IncrementoConteo(letra);
		
		cin >> letra;
	}
	
	for (char i = 'A'; i <= 'Z'; i++){
		cout << "\nHay " << una_letra.CuantasHay(i) << " " << i;
	}
	
	cout << "\n\n";
	system("pause");
}
