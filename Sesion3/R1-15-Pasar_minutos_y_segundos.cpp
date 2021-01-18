/* Programa para colocar dentro de si rango un numero de 
	horas, minutos y segundos.
	necesitamos: horas, minutos, segundos.
	Calcula: equivalente dentro de rango en dias, horas, minutos, segundos.
*/

#include<iostream>																		//Inclusión recuersos E/S.	

using namespace std;

int main(){																					//Programa principal.
	const int paso_segundos=60, paso_minutos=60, paso_horas=24;
	int horas, minutos, segundos;														//Declaración variables de entrada.
	int total_segundos;																	//Declaración variable auxiliar.
	int nuevos_dias, nuevas_horas, nuevos_minutos, nuevos_segundos;		//Declaración variables de salida.
	
	cout << "Introduzca el numero de horas: ";
	cin >> horas;
	cout << "Introduzca el numero de minutos: ";
	cin >> minutos;
	cout << "Introduzca el numero de segundos: ";
	cin >> segundos;
	
	total_segundos = horas*60*60 + minutos*60 + segundos;
	
	nuevos_segundos = total_segundos % paso_segundos;
	nuevos_minutos = total_segundos / paso_segundos % paso_minutos;
	nuevas_horas = total_segundos / paso_segundos / paso_minutos % paso_horas;
	nuevos_dias = total_segundos / paso_segundos / paso_minutos / paso_horas;
	
	cout << "\nSu equivalente es " << nuevos_dias << " dias, " << nuevas_horas << " horas, " << nuevos_minutos << " minutos, " << nuevos_segundos << " segundos.\n\n";
	system("pause");
}
