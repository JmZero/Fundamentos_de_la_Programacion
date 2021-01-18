#include <iostream>
#include <cctype>

using namespace std;

int main(){
	const int TERMINADOR = -1;
	int sucursal, unidades, unidades_primera_sucursal = 0, unidades_segunda_sucursal = 0, unidades_tercera_sucursal = 0;
	char producto;
	bool condicion_terminador;
	
	condicion_terminador = sucursal != TERMINADOR;
	
	cout << "Introduzca el numero de sucursal (1, 2, 3), el producto (a, b, c) y el numero de unidades.\n";
	
	do{
		cin >> sucursal;
		
		if (condicion_terminador){
			cin >> producto;
			cin >> unidades;
	
			if (sucursal == 1)
				unidades_primera_sucursal = unidades_primera_sucursal + unidades;
			else
				if (sucursal == 2)
					unidades_segunda_sucursal = unidades_segunda_sucursal + unidades;
				else
					if (sucursal == 3)
						unidades_tercera_sucursal = unidades_tercera_sucursal + unidades;
		}
	}while (condicion_terminador);
	
	if (unidades_primera_sucursal >= unidades_segunda_sucursal && unidades_primera_sucursal >= unidades_tercera_sucursal){
		cout << "La primera sucursal es la que mas ha vendido con " << unidades_primera_sucursal << " unidades.\n\n";
	}
	else{
		if (unidades_segunda_sucursal >= unidades_tercera_sucursal){
			cout << "La segunda sucursal es la que mas ha vendido con " << unidades_segunda_sucursal << " unidades.\n\n";
		}
		else{
			cout << "La tercera sucursal es la que mas ha vendido con " << unidades_tercera_sucursal << " unidades.\n\n";
		}
	}
	
	system("pause");
}
