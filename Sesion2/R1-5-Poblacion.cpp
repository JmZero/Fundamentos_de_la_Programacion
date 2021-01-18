/* Programa que calcula la problacion de china
	en dos años conociendo la población actual, 
	cada cuanto nace, muere y emigra una persona
	y el valor de 2 años en segundos.
*/

#include<iostream>													//Inclusión recursos E/S

using namespace std;

int main(){
	const double persona_nace = 1.87;							//Declaración de valores de datos
	const double persona_muere = 3.27;							//nacimiento, muerte, emigración.
	const double persona_emigra = 71.9;
	int poblacion_actual = 1375570814;							//Declaración del valor de la población actual
	int tiempo_nueva_muestra = 2*365*24*60*60;				//Declaración del valor 2 años en segundos
	int total_nace, total_muere, total_emigra;				//Declaracion de valores auxiliares
	int nueva_poblacion;												//Declaración valor salida
	
	total_nace = tiempo_nueva_muestra/persona_nace;
	total_muere = tiempo_nueva_muestra/persona_muere;
	total_emigra = tiempo_nueva_muestra/persona_emigra;
	
	nueva_poblacion = poblacion_actual + total_nace - total_muere - total_emigra;

	cout << "La poblacion en dos anios sera de " << nueva_poblacion << " personas.\n\n";
	
	system("pause");
}

/*
..............................................................................................
.	x años * 365 dias/1 años * 24 horas/1 dia * 60 min/1 dia * 60 seg/1min							.
.																															.
.	Aplicaremos este factor de conversion en el programa en la variable tiempo_nueva_muestra	.
.	para pasar de años a dias como lo hacemos al asignarle el valor a la variable					.
..............................................................................................
*/
