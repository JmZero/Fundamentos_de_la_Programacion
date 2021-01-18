/*Programa para eliminar las posiciones de las letras de una cadena.
*/

#include <iostream>		//Inclusión recuerso E/S

using namespace std;

//Definición de la clase
class SecuenciaEnteros {
	private:					//Datos mienbros privados
		static const int TAMANIO = 50;
		int vector_privado[TAMANIO];
		int total_utilizados;
	public:					//Métodos publicos de la clase
		//Constructor de la clase
		SecuenciaEnteros()
			:total_utilizados(0){
		}
		
		/*Métodos para devolver los valores de los datos miembro privados*/
		int TotalUtilizados(){
			return total_utilizados;
		}
		
		/*Método para devolver el tamaño maximo del vector*/
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
		
		/*Método para ordenar una cadena de menor a mayor*/
		void Ordena_por_Insercion(){
			int izda, i;
			int a_desplazar;
			
			for (izda = 1; izda < total_utilizados; izda++){
				a_desplazar = vector_privado[izda];
			
				for (i = izda; i > 0 && a_desplazar < vector_privado[i-1]; i--)
					vector_privado[i] = vector_privado[i-1];
				
				vector_privado[i] = a_desplazar;
			}
		}
};

int main(){										//Programa principal
	SecuenciaEnteros una_secuencia;		//Declaración de objetos
	const char TERMINADOR_C = '\n';		//Declaración de constantes
	const int TERMINADOR_E = -1;
	const int TAMANIO_V = 50;
	char caracteres[TAMANIO_V];			//Declaración del vector
	char caracter;								//Declaración variables E/S
	int entero;
	int total_caracteres;					//Declaración variables auxiliares
	
	cout << "Introduzca una secuencia de caracteres: ";
	caracter = cin.get();
	
	for (total_caracteres=0; total_caracteres < TAMANIO_V && caracter != TERMINADOR_C; total_caracteres++){
		caracteres[total_caracteres] = caracter;
		
		caracter = cin.get();
	}
	
	cout << "\nIntroduzca una secuencia de enteros: ";
	cin >> entero;
	
	while (entero != TERMINADOR_E){
		una_secuencia.Aniade(entero);
		
		cin >> entero;
	}
	
	una_secuencia.Ordena_por_Insercion();
	
	/*	Algoritmo
	
		Recorreremos las posiciones del la cadena hasta llegar al primer valor positivo
		Despues eliminaremos con un bucle los valores, si la posicion es igual al valor,
		aumentamos el la posicion del vector que almacena las posiciones, sino, escribiremos
		sobre el mismo vector cadena el valor del caracter.
	*/
	int pos_escritura=0;
	int pos_vector;
	
	for (pos_vector = 0; una_secuencia.Elemento(pos_vector) < 0; pos_vector++){
	}
	
	for (int pos_lectura = 0; pos_lectura < total_caracteres; pos_lectura++){
		if (pos_lectura == una_secuencia.Elemento(pos_vector)){
			pos_vector++;
		}
		else{
			caracteres[pos_escritura] = caracteres[pos_lectura];
			pos_escritura++;
		}
	}
	
	total_caracteres = pos_escritura;
	
	cout << "\nLa cadena final es: ";
	
	for (int i = 0; i < total_caracteres; i++){
		cout << caracteres[i];
	}
	
	cout << "\n\n";
	system("pause");
}
