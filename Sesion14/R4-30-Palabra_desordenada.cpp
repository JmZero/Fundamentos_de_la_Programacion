/*	Programa para ver si dos cadenas son similares o no.
*/

#include <iostream>				//Inclusión recursos E/S

using namespace std;

class SecuenciaCaracteres {
	private:					//Datos mienbros privados
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO];
		int total_utilizados;
	public:					//Métodos publicos de la clase
		//Constructor de la clase
		SecuenciaCaracteres()
			:total_utilizados(0){
		}
		
		/*Métodos para devolver los valores de los datos miembro privados*/
		int TotalUtilizados(){
			return total_utilizados;
		}
		
		int Capacidad(){
			return TAMANIO;
		}
		
		/*Método para añadir un nuevo valor al vector*/
		void Aniade(char nuevo){
			if (total_utilizados < TAMANIO){
				vector_privado[total_utilizados] = nuevo;
				total_utilizados++;
			}
		}
		
		/*Método para mostrar el elemento correspondiente a un punto del vector	*/
		char Elemento(int indice){
			return vector_privado[indice];
		}
		
		/*Método para eliminar un valor cualquiera del vector y que los demas cambien
			a la posición anterior siempre que esten despues del eliminado	*/
		void Elimina (int posicion){
			if (posicion >= 0 && posicion < total_utilizados){
				int tope = total_utilizados-1;
				
				for (int i = posicion ; i < tope ; i++)
					vector_privado[i] = vector_privado[i+1];
				
				total_utilizados--;
			}
		}
		
		/*Método para mostrar en una cadena los caracteres introducidos*/
		string ToString(){
			string cadena;

			for (int i=0; i<total_utilizados; i++)
				cadena = cadena + vector_privado[i];
			
			return cadena;
		}
};

int main(){														//Programa principal
	SecuenciaCaracteres una_cadena, otra_cadena;		//Declaración objetos
	const char TERMINADOR = '\n';							//Declaración de constantes
	const int TAMANIO_V = 'z'-'a';
	int aux1[TAMANIO_V] = {0};								//Declaración de vectores
	int aux2[TAMANIO_V] = {0};
	char caracter;												//Declaración variables de entrada
	bool son_similares = true;								//Declaración de variables aunxiliares
	
	cout << "Introduzca la primera cadena: ";
	caracter = cin.get();
	
	while(caracter != TERMINADOR){
		una_cadena.Aniade(caracter);
		
		caracter = cin.get();
	}
	
	cout << "Introduzca la segunda cadena: ";
	caracter = cin.get();
	
	while(caracter != TERMINADOR){
		otra_cadena.Aniade(caracter);
		
		caracter = cin.get();
	}
	
	/*	Algoritmo
		
		Primero comprobaremos que el primer valor de ambas cadenas es el mismo
		y tambien el ultimo.
		Si lo son, almacenaremos en los vectores la cantidas de cada letra.
		Comprobaremos que son iguales, si la cantidad de cada letra coincide
		las cadenas son similares, sino no.
	*/
	if (una_cadena.Elemento(0) == otra_cadena.Elemento(0) && 
		 una_cadena.Elemento(una_cadena.TotalUtilizados()-1) == otra_cadena.Elemento(otra_cadena.TotalUtilizados()-1)){
		 	
		 	for (int i=1; i < una_cadena.TotalUtilizados()-1; i++){
			 	aux1[una_cadena.Elemento(i)-'a'] = aux1[una_cadena.Elemento(i)-'a'] +1;
			 }
			 
			 for (int j=1; j < otra_cadena.TotalUtilizados()-1; j++){
			 	aux2[otra_cadena.Elemento(j)-'a'] = aux2[otra_cadena.Elemento(j)-'a'] +1;
			 }
			 
			 int k = 0;
			 
			 for (int l=0; l < TAMANIO_V && son_similares; l++){
			 	if(aux1[l] != aux2[k])
			 		son_similares = false;
			 	
			 	k++;
			 }
		}
	else
		son_similares = false;
			 
	if(son_similares)
		cout << "\nLas cadenas introducidas son similares.";
	else
		cout << "\nLas cadenas introducidas no son similares.";
		
	cout << "\n\n";
	system("pause");
}			 			
