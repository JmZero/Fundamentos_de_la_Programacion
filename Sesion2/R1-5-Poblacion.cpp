/* Programa que calcula la problacion de china
	en dos a�os conociendo la poblaci�n actual, 
	cada cuanto nace, muere y emigra una persona
	y el valor de 2 a�os en segundos.
*/

#include<iostream>													//Inclusi�n recursos E/S

using namespace std;

int main(){
	const double persona_nace = 1.87;							//Declaraci�n de valores de datos
	const double persona_muere = 3.27;							//nacimiento, muerte, emigraci�n.
	const double persona_emigra = 71.9;
	int poblacion_actual = 1375570814;							//Declaraci�n del valor de la poblaci�n actual
	int tiempo_nueva_muestra = 2*365*24*60*60;				//Declaraci�n del valor 2 a�os en segundos
	int total_nace, total_muere, total_emigra;				//Declaracion de valores auxiliares
	int nueva_poblacion;												//Declaraci�n valor salida
	
	total_nace = tiempo_nueva_muestra/persona_nace;
	total_muere = tiempo_nueva_muestra/persona_muere;
	total_emigra = tiempo_nueva_muestra/persona_emigra;
	
	nueva_poblacion = poblacion_actual + total_nace - total_muere - total_emigra;

	cout << "La poblacion en dos anios sera de " << nueva_poblacion << " personas.\n\n";
	
	system("pause");
}

/*
..............................................................................................
.	x a�os * 365 dias/1 a�os * 24 horas/1 dia * 60 min/1 dia * 60 seg/1min							.
.																															.
.	Aplicaremos este factor de conversion en el programa en la variable tiempo_nueva_muestra	.
.	para pasar de a�os a dias como lo hacemos al asignarle el valor a la variable					.
..............................................................................................
*/
