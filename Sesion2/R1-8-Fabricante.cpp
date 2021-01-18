/* Programa para calcular cuanto cobra el diseñador y los fabricantes
	de un producto.
	Necesitamos: ganancia total del producto.
	Calculamos: ganancias del diseñador y de cada uno de los fabricantes.
*/

#include<iostream>																			//Inclusión recursos E/S

using namespace std;

int main(){																						//Programa principal
	double ganancia_total;																	//Declaración variable de entrada
	double ganancia_diseniador, ganancia_fabricante;								//Declaración varibles de salida 
	
	cout << "Introduzca el valor de la ganancia total de la empresa: ";
	cin >> ganancia_total;
	
	ganancia_fabricante = ganancia_total/5.0;											//Como el diseñador cuenta como 2 fabricantes podemos decir que la ganancia total
	ganancia_diseniador = 2*ganancia_fabricante;										//se reparte entre 5 para calcular lo que gana 1 fabricante.
	
	cout << "\nEl diseniador cobra " << ganancia_diseniador << " euros y cada uno de los fabricantes cobra " << ganancia_fabricante << " euros.\n\n";
	
	system("pause");
}
