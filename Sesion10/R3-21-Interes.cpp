/*	Programa para calcular el capital a un tope de años
	y cuantos años hacen falta para doblar, como mínimo
	dicho capital usando una clase.
*/

#include <iostream>						//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class DepositoSimulacion{
	private:			//Datos miembros y métodos privados
		double capital = 0.0;
		double interes = 0.0;
		
		/*Método para comprobar que los valores introducidos sean positivos*/
		bool CapitalInteresesCorrectos(double capital_dado, double int_dados){
			return capital_dado >= 0 && int_dados >= 0;
		}
	public:			//Métodos públicos
		//Constructor de la clase
		DepositoSimulacion(double capital_intro, double interes_intro){
			if (CapitalInteresesCorrectos(capital_intro, interes_intro))
				SetDatosDeposito(capital_intro, interes_intro);
		}
		
		/*	Métodos para asignar valores a los datos miembros privados*/
		void SetDatosDeposito(double capital_intro, double interes_intro){
			SetCapital(capital_intro);			
			SetInteres(interes_intro);			
		}
		
		void SetCapital(double capital_intro){
			capital = capital_intro;			
		}
		
		void SetInteres(double interes_intro){
			interes = interes_intro;			
		}
		
		/*	Método para calcular el capital de la cuenta tras x años,
			el bucle calcula el capital a cada año transcurrido.*/
		double InvertirTopeAnios(double tope_anio){
			double capital_final = capital;
			
				for (int anio = 1; anio <= tope_anio; anio++){
					capital_final = capital_final + capital_final*(interes/100);
				}
				return capital_final;
		}
		
		/*	Método para calcular los años para doblar el capital,
			como mínimo, el bucle repite hasta que el capital es
			igual o mayor al doble del capital inicial        */
		double AniosDoblaCapital(){
			double tope_capital = 2*capital;
			int anio = 0;
			
			for (double copia_capital = capital; copia_capital < tope_capital; anio++ ){
				copia_capital = copia_capital + copia_capital*(interes/100);
			}
			return anio;
		}
};

int main(){															//Programa principal
	double capital_introducido, interes_introducido;	//Declaracion de variables
	int anio;
	
	cout << "Introduzca el valor del capital: ";
	cin >> capital_introducido;
	cout << "\nIntroduzca el valor del interes: ";
	cin >> interes_introducido;
	
	DepositoSimulacion una_cuenta(capital_introducido, interes_introducido);
	
	cout << "Introduzca el numero de anios a plazo fijo: ";
	cin >> anio;
	
	cout << "\nTras " << anio << " anios se tentra como capital: " << una_cuenta.InvertirTopeAnios(anio);
	cout << "\nHan de pasar " << una_cuenta.AniosDoblaCapital() << " anios para que se duplique, como minimo, el capital.\n\n";
	system("pause");
}
