/*	Programa que leera una cadena de caracteres,
	y eliminara aquellos que esten repetidos, 
	de forma ineficiente y eficiente.
*/

#include <iostream>					//Inclusión recursos E/S

using namespace std;

//Definición de la clase
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
		
		/*Método para eliminar los caracteres repetidos de la cadena
			haciendo uso de un vector local dentro del método*/
		void EliminaRepetidosLocal(){
			char vector_local[TAMANIO];
			int nuevo_utilizados = 0;
			bool se_repite;
		
			for (int i = 0; i < total_utilizados; i++){
				se_repite = false;
		
				for (int j = 0; j < nuevo_utilizados && !se_repite; j++){
					se_repite = vector_privado[i] == vector_local[j];
				}
		
				if(!se_repite){
					vector_local[nuevo_utilizados] = vector_privado[i];
					nuevo_utilizados++;
				}
			}
			
			for (int i = 0; i < nuevo_utilizados; i++){
				vector_privado[i] = vector_local[i];
			}
			total_utilizados = nuevo_utilizados;
		}
		
		/*Método para eliminar los caracteres repetidos de la cadena*/
		void EliminaRepetidos(){
			bool sin_repetidos;
			int recorre_vector;
			
			for (int i=0; i < total_utilizados; i++){
				recorre_vector = i+1;
				while(recorre_vector < total_utilizados){
					sin_repetidos = vector_privado[i] == vector_privado[recorre_vector];
					
					if (sin_repetidos)
						Elimina(recorre_vector);
					else
						recorre_vector++;
				}				
			}
		}			
};

int main(){
	SecuenciaCaracteres una_secuencia;	//Declaración del objeto
	const char TERMINADOR = '\n';			//Declaración de variable constante
	char caracter;								//Declaración de variable de entrada
	
	cout << "Introduzca una secuencia de caracteres: ";
	caracter = cin.get();
	
	while(caracter != TERMINADOR){
		una_secuencia.Aniade(caracter);
		
		caracter = cin.get();
	}
	
	una_secuencia.EliminaRepetidos();
	
	cout << "\n" << una_secuencia.ToString() << "\n\n";
	system("pause");
}
