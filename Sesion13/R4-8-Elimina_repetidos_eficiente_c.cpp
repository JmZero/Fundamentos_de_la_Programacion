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
		
		/*Método para eliminar los caracteres repetidos de la cadena*/
		void EliminaRepetidos(){
			const int TOPE_REPETIDOS = 1;
			int cuenta_repetidos;
			bool valor_repetido;
			int posicion_escritura;
			
			for (int pos_primera_ocurrencia = 0; pos_primera_ocurrencia < total_utilizados; pos_primera_ocurrencia++){
				posicion_escritura = pos_primera_ocurrencia;
				cuenta_repetidos = 0;
				for (int posicion_lectura = pos_primera_ocurrencia; posicion_lectura < total_utilizados; posicion_lectura++){
					valor_repetido = vector_privado[pos_primera_ocurrencia] == vector_privado[posicion_lectura];
					
					if (!valor_repetido || cuenta_repetidos < TOPE_REPETIDOS){
						vector_privado[posicion_escritura] = vector_privado[posicion_lectura];
						posicion_escritura++;
						cuenta_repetidos++;
					}
				}		
				total_utilizados = posicion_escritura;		
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
	
	cout << "\nLa secuencia sin repetidos: " << una_secuencia.ToString() << "\n\n";
	system("pause");
}
