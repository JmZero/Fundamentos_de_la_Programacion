/*	Programa que leera desde teclado las horas trabajadas
	y el precio de la hora.
	Se llamara a la función y se obtendra el resultado de 
	el salario del trabajador.
*/

#include <iostream>												//Inclusión recursos E/S

using namespace std;

//Declaración de funciones

/*
	La funcion calculara el salario si es inferior
	o igual a 40 horas o si es superor a 40 horas,
	las horas extras valen un 50% mas.
*/

double SalarioTotal(double horas, double precio){
	const int TOPE_HORAS = 40;
	double horas_restantes;
	double salario;
	double IV_precio_extra = precio * 1.5;
	
	if (horas <= TOPE_HORAS)
		salario = horas * precio;
	else{
		horas_restantes = horas - TOPE_HORAS;
		salario = TOPE_HORAS * precio + horas_restantes * IV_precio_extra;
	}
	return salario;
}

int main(){																//Programa principal
	double precio_hora, horas_trabajadas;						//Declaración de variables de entrada
	double salario;													//Declaración de variables de salida
	
	cout << "Introduzca el numero de horas trabajadas: ";
	cin >> horas_trabajadas;
	cout << "Introduzca el precio por hora: ";
	cin >> precio_hora;
	
	salario = SalarioTotal(horas_trabajadas, precio_hora);
	
	cout << "\nEl salario del trabajador es de " << salario << " euros.\n\n";
	system("pause");
}
