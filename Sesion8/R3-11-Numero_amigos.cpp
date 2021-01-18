/*	Programa que nos dira si 2 numeros son amigos.
*/

#include <iostream>							//Inclusión recursos E/S 

using namespace std;

//Declaración de funciones

/*
	Función que calculara la suma de los divisores propios
	de un número.
*/

int SumaDivisores(int numero){
	int contador;
	int tope = numero/2;
	int suma_divisores = 0;
	
	for (contador = 2; contador <= tope; contador++){
		if (numero%contador == 0)
			suma_divisores = suma_divisores + contador;
	}
		return suma_divisores;
}
	
/*
	Función que comparara si dos números son amigos,
	llamando a SumaDivisores y sumando 1, para comprobar
	que sea igual al otro.
*/

void NumerosAmigos(int a, int b){
	bool condicion;
	
	condicion = SumaDivisores(a)+1 == b && SumaDivisores(b)+1 == a;
	
	if (condicion)
		cout << "\nLos numero son amigos.";
	else
		cout << "\nLos numeros no son amigos.";
}

/*
	Función que recorrera desde los valores de un número
	en un rango de 3 desde el menos al mayor y nos dira si
	se cumpre 
*/

void AmigoIntervalo(int c){
	int rango = 3;
	int tope = c + rango;
	bool condicion;
	
	for(int i = c - rango; i <= tope; i++){
		condicion = SumaDivisores(c)+1 == i && SumaDivisores(i)+1 == c;
		
		if (condicion)
			cout << "\nLos numeros " << c << " y " << i << " son amigos.";
	}
	
	if (!condicion)
		cout << "\nNo tiene numeros amigos en un interval de rango 3.";
}
	
int main(){														//Programa principal
	int primer_valor, segundo_valor, nuevo_valor;	//Declaración de variables de entrada
	
	cout << "Introduzca el primer valor: ";
	cin >> primer_valor;
	cout << "Introduzca el segundo valor: ";
	cin >> segundo_valor;
	
	NumerosAmigos(primer_valor, segundo_valor);
	
	cout << "\nIntroduzca un nuevo valor: ";
	cin >> nuevo_valor;
	
	AmigoIntervalo(nuevo_valor);
	
	cout << "\n\n";
	system("pause");
}
