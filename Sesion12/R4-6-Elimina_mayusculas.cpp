/*	Programa que leera una cadena de caracteres,
	eliminara las mayusculas de esta, y la imprimira
	sin ellas.
*/

#include <iostream>					//Inclusión recursos E/S
#include <cctype>						

using namespace std;

//Definición de la clase
class SecuenciaCaracteres {
	private:					//Datos mienbros privados
		static const int TAMANIO = 50;
		char vector_privado[TAMANIO];
		int total_utilizados;
	public:					//Métodos públicos de la clase
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
		
		/*Método para eliminar las mayusculas de la cadena de caracteres*/
		void EliminaMayusculas(){
			int i=0;
			
			while(i<total_utilizados){
				if (isupper(vector_privado[i]))
					Elimina(i);
				else
					i++;
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
	
	una_secuencia.EliminaMayusculas();
	
	cout << "\n" << una_secuencia.ToString() << "\n\n";
	system("pause");
}
