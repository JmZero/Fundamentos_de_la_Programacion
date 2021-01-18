/*	Programa que calculara a partir de una retencion y inicial
	y de la renta bruta de una persona cual sera su renta final
	dependiendo de si es autonomo, pensionista, casado, soltero
	y de si gana menos de 20000 euros.
*/
#include <iostream>
#include <cctype>

using namespace std;

bool LeeOpcion2Alternativas(){
	char opcion;
	bool salida;
	
	do{
		cin >> opcion;
		opcion = toupper(opcion);
	}while (opcion != 'N' && opcion != 'S');
	
	if (opcion == 'S')
		salida = true;
	else
		salida = false;
	
	return salida;
}
	
int main(){																//Programa principal
	const int RETENCION_AUTONOMO = 3.0;							//Declaración de constantes
	const int RETENCION_PENSIONISTA = 2.0;
	const int RETENCION_NO_PENSIONISTA = 2.0;
	const int RETENCION_RENTA_INFERIOR = 2.0;
	const int RETENCION_SOLTERO = 3.0;
	const double RETENCION_CASADO = 2.5;
	const int RENTA_MAXIMA = 20000;
	bool autonomo, pensionista, estado_civil;					//Declaración de variables de opcion
	double renta_bruta, retencion_inicial;
	double retencion_no_pensionista, retencion_final;		//Declaración de variables auxiliares
	double renta_neta;												//Declaración de variable de salida
	
	cout << "Introduzca le renta bruta: ";
	cin >> renta_bruta;
	cout << "Introduzca la retencion inicial (en %): ";
	cin >> retencion_inicial;
	cout << "\nEs autonomo (S/N): ";
	autonomo = LeeOpcion2Alternativas();
	cout << "Es pensionista (S/N): ";
	pensionista = LeeOpcion2Alternativas();
	cout << "Esta casado (S/N): ";
	estado_civil = LeeOpcion2Alternativas();

	if (autonomo){
		retencion_final = retencion_inicial - RETENCION_AUTONOMO;
	}
	else{
		if (pensionista){
			retencion_final = retencion_inicial + RETENCION_PENSIONISTA;
		}
		else{
			retencion_no_pensionista= retencion_inicial + RETENCION_NO_PENSIONISTA;
			if (renta_bruta < RENTA_MAXIMA){
				retencion_final = retencion_no_pensionista + RETENCION_RENTA_INFERIOR;
			}
			else{
				if (estado_civil){
					retencion_final = retencion_no_pensionista + RETENCION_CASADO;
				}
				else{
					retencion_final = retencion_no_pensionista + RETENCION_SOLTERO;
				}
			}
		}
	}
	
	renta_neta = renta_bruta - renta_bruta * retencion_final/100;
	
	cout << "\nLa renta neta es " << renta_neta << " euros.\n\n";
	
	system("pause");
}
