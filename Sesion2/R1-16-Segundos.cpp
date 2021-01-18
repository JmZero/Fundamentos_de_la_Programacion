/* Programa para calcular el numero de segundos en un intervalo
	de tiempo definido por los valores de entra en horas, minutos 
	y segundos de un instante inicial y un instante final.
	Necesita: hora, minuto y segundo inicial y hora, minuto y segundo final.
	Calcula: segundos entre hora final y hora inical.
*/

#include<iostream>																												//Inclusión recursos E/S

using namespace std;

int main(){
	int hora_inicio, hora_final, minuto_inicio, minuto_final, segundo_inicio, segundo_final;				//Declaración de valores de entrada
	int seg_hora_inicio, seg_hora_final, seg_minuto_inicio, seg_minuto_final;									//Declaración de valores auxiliares
	int segundos_final, segundos_inicio;
	int segundos_intervalo;																										//Declaración de valor de salida
	
	cout << "Introduzca los valores del instante inicial:\n\n";														//Introducción de los valores del instante inicial
	cout << "Hora (entre 0 y 23): ";
	cin >> hora_inicio;
	cout << "Minuto (entre 0 y 59): ";
	cin >> minuto_inicio;
	cout << "Segundo (entre 0 y 59): ";
	cin >> segundo_inicio;
	
	cout << "\n\nIntroduzca los valores del instante final:\n\n";													//Introducción de los valores del instante final
	cout << "Hora (entre 0 y 23): ";
	cin >> hora_final;
	cout << "Minuto (entre 0 y 59): ";
	cin >> minuto_final;
	cout << "Segundo (entre 0 y 59): ";
	cin >> segundo_final;
	
	seg_hora_inicio = hora_inicio*60*60;
	seg_hora_final = hora_final*60*60;
	seg_minuto_inicio = minuto_inicio*60;
	seg_minuto_final = minuto_final*60;
	
	segundos_final = seg_hora_final + seg_minuto_final + segundo_final;
	segundos_inicio = seg_hora_inicio + seg_minuto_inicio + segundo_inicio;
	
	segundos_intervalo = segundos_final - segundos_inicio;
	
	cout << "\nEl numero de segundos entre ambos instantes es de " << segundos_intervalo << " segundos.\n\n";
	
	system("pause");
}
