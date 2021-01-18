/*	Programa que calculara la sumatoria y el producto hasta un valor
	tope y si la razon lo permite, la suma hasta infinito, haciendo
	uso de una clase.
*/

#include <iostream>									//Inclusión recursos E/S
#include <cmath>										//Inclusión recursos matematicos

using namespace std;

//Definición de la clase
class ProgresionGeometrica{
	private:									//Datos de tipo privado
		double primer_termino = 0.0;
		double razon = 0.0;
	public:									//Datos y metodos de tipo publico
		
		//Constructor de la clase
		ProgresionGeometrica(double termino_inicio, double r){
			SetDatosProgresion(termino_inicio, r);
		}
		
		/* Método para asignarle los valores a los datos privados.*/
		void SetDatosProgresion(double termino_inicio, double r){
			primer_termino = termino_inicio;
			razon = r;
		}
		
		/*	La función calculara el ultimo termino de la serie	*/
		double Termino(int numero_veces){
			double termino = primer_termino;
			
			for (int i = 2; i <= numero_veces; i++){     
				termino = termino * razon;
			}
			return termino;
		}
		
		/*	La funcion calcula la sumatoria de los k terminos de una serie.*/
		double SumaHasta(int numero_veces){	
			double termino = primer_termino;
			double suma_total = termino;
			
			for (int i = 2; i <= numero_veces; i++){     
				termino = termino * razon;
				suma_total = suma_total + termino;
			}
			return suma_total;
		}
		
		/*	La función calculara el producto de los valores desde el inicial
			hasta el final de la serie.													*/
		double ProductoHasta(int numero_veces){
			double producto;
			double termino_final;
			
			termino_final = Termino(numero_veces);
			producto = sqrt(pow((primer_termino*termino_final), numero_veces));
			
			return producto;
		}
		
		/*	La función calculara la sumatoria hasta infinito.*/
		double SumaHastaInfinito(){
			double suma;
			double razon_absoluta = abs(razon);
			
			suma = primer_termino / (1 - razon_absoluta);
			
			return suma;
		}
};

int main(){
	double termino_primero, razon;								//Declaración variables entrada
	int  tope;
	
	cout << "Introduzca el primer termino de la progresion: ";
	cin >> termino_primero;
	cout << "Introduzca la razon de la progresion: ";
	cin >> razon;
	
	ProgresionGeometrica una_progresion(termino_primero, razon); //Declaración de objetos
	
	cout << "Introduzca el tope de terminos que quiere en la progresion: ";
	cin >> tope;
	
	for (int i = 1; i <= tope; i++){
		cout << "\nTermino " << i << " de la progresion: " << una_progresion.Termino(i);
	}
	
	cout << "\nLa suma hasta tope termino es " << una_progresion.SumaHasta(tope) << ".";

	cout << "\n\n";
	system("pause");
}
