/*	Programa que a partir del numero de unidades de un producto y
	su precio por unidad calculara cual sera el total de la venta
	del producto. 
*/
#include <iostream>

using namespace std;

int main(){																				//Programa principal
	const int MINIMO_UNIDADES_PARA_DESCUENTO = 100;							//Declaración de constantes
	const double MINIMO_VENTA_GRANDE_PARA_DESCUENTO = 700.0;
	const double DESCUENTO_POR_UNIDADES_VENDIDAS = 1 - 0.03;
	const double DESCUENTO_POR_VENTA_GRANDE = 1 - 0.02;
	int unidades_vendidas;															//Declaración de variables de entrada
	double precio_unitario, nuevo_precio_unitario;
	double total_venta;																//Declaración de variables de salida
	
	cout << "Precio unitario: ";
	cin >> precio_unitario;
	cout << "\nUnidades vendidas: ";
	cin >> unidades_vendidas;

	if (unidades_vendidas >= MINIMO_UNIDADES_PARA_DESCUENTO){
		nuevo_precio_unitario = precio_unitario * DESCUENTO_POR_UNIDADES_VENDIDAS;
		total_venta = nuevo_precio_unitario * unidades_vendidas;
		
		if (total_venta >= MINIMO_VENTA_GRANDE_PARA_DESCUENTO){
			total_venta = total_venta * DESCUENTO_POR_VENTA_GRANDE;
		}
	}
	else{
		total_venta = precio_unitario * unidades_vendidas;
	}
	
	cout << "\nTotal ventas: " << total_venta << ".\n\n";
	
	system("pause");
}
