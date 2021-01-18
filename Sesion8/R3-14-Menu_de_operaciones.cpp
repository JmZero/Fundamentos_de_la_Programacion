/*	Programa que mostrara en pantalla un menu
	y dependiendo de la opcion introducida no 
	hara una cosa u otra.
*/

#include <iostream>								//Inclusión recursos E/S

using namespace std;

//Declaración de funciones

/*
	La función muestra en texto en pantalla
*/
void MuestraOpciones(){
	cout << "--------------------";
	cout << "\n I.  Introducir numeros";
	cout << "\n S.  Suma";
	cout << "\n P.  Producto";
	cout << "\n M.  Maximo";
	cout << "\n R.  Salir";
	cout << "\n--------------------";
}

/*
	La funcion calcula el maximo de 2 valores
	y lo devuelve.
*/

int Maximo(int un_valor, int otro_valor){
	int maximo;
	
	if (un_valor < otro_valor)
		maximo = otro_valor;
	else
		maximo = un_valor;
	
	return maximo;
}

/*
	La función leera desde teclado una opción
	y realizara las operaciones correspondientes
	a dicha opción.
*/

void LeeOpciones(){
	char opcion;
	int un_valor, otro;
	int salida;
	bool condicion_salida = false;
	
	while (!condicion_salida){
		cout << "\nIntroduzca opcion: ";
		cin >> opcion;
		
		opcion = toupper(opcion);
		
		if (opcion == 'I'){
			cin >> un_valor;
			cin >> otro;
		}
		else{
			if (opcion == 'S'){
				salida = un_valor + otro;
				cout << "La suma vale: " << salida;
			}
			else
				if (opcion == 'P'){
					salida = un_valor * otro;
					cout << "El producto vale: " << salida;
				}
				else
					if (opcion == 'M'){
						salida = Maximo(un_valor, otro);
						cout << "El maximo es: " << salida;
					}
					else
						if (opcion == 'R'){
							condicion_salida = true;
							cout << "Fin del programa";
						}
		}
	}
}

int main(){							//Programa principal
	MuestraOpciones();
	LeeOpciones();
	
	cout << "\n\n";
	system("pause");
}
	
