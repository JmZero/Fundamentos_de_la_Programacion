/* Programa que leera desde teclado una dos enteros,
	n y m y nos dira el valor de la combinatoria de estos.
*/

#include <iostream>																		//Inclusión recursos E/S

using namespace std;

int main(){																					//Programa principal
	int entero1, entero2;																//Declaración de variables de entrada
	int entero1_copia, entero2_copia, diferencia_entero;						//Declaración de variables auxiliares
	int primer_factorial, segundo_factorial, diferencia_factorial;			
	double combinatorio;																	//Declaracion devariabels de salida
	
	
	
	do{
		cout << "Introduzca el valor n y m de la combinatoria: ";
		cin >> entero1;
		cin >> entero2;
	}while (entero1 < entero2);
	
	//Inicialización de variables
	primer_factorial = 1;
	segundo_factorial = 1;
	diferencia_factorial = 1;
	
	for (entero1_copia = entero1 ; entero1_copia > 0 ; entero1_copia--){
		primer_factorial = primer_factorial * entero1_copia;
	}
	
	for (entero2_copia = entero2 ; entero2_copia > 0 ; entero2_copia--){
		segundo_factorial = segundo_factorial * entero2_copia;
	}
	
	for (diferencia_entero = entero1 - entero2 ; diferencia_entero > 0 ; diferencia_entero--){
		diferencia_factorial = diferencia_factorial * diferencia_entero;
	}
	
	combinatorio = primer_factorial / (segundo_factorial * diferencia_factorial);
	
	cout << "\nEl resultado de la combinatoria es " << combinatorio << ".\n\n";
	system("pause");
}
