/*	Programa para crear una matriz buscaminas y poder untroducir minas
	dentro de la matriz del tablero, pudiendo despues seleccionar una 
	casilla y decir cuantas minas tiene a su alrededor al no ser que 
	sea una mina.
*/

#include <iostream>				//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class TableroBuscaMinas{
	private:			//Datos miembro y métodos privados
		static const int MAX_FILAS = 50;
		static const int MAX_COLUMNAS = 30;
		bool matriz_minas[MAX_FILAS][MAX_COLUMNAS] = {{false}};
		
		/*	Método para comprobar si la posición introducida esta 
			dentro de la matriz*/
		bool PosicionCorrecta(int pos_fila, int pos_columna){
			return pos_fila>=0 && pos_fila < MAX_FILAS && pos_columna>=0 && pos_columna < MAX_COLUMNAS;
		}
	public:			//Métodos públicos
		/*	Metodo para introducir una mina, comprueba que la 
			posicion es correcta y esa posicion la vuelve true*/
		void IntroduceMina(int pos_fila, int pos_columna){
			if (PosicionCorrecta(pos_fila, pos_columna))
				matriz_minas[pos_fila][pos_columna] = true;
		}
		
		/*	Método para encontrar minas alrededor de una posición,
			si no es correcta devolvera un valor de error,
			si es correcta y la posición es una mina devolvera -1,
			si no es una mina, comprobara a su alrededor cuales son
			minas y las contara.*/
		int EncuentraMinas(int pos_fila, int pos_columna){
			int cuenta_minas = 0;
			
			if (PosicionCorrecta(pos_fila, pos_columna)){
				if (matriz_minas[pos_fila][pos_columna] == true)
					cuenta_minas = -1;
				else{
					for (int i = pos_fila-1; i <= pos_fila+1; i++){
						for (int j = pos_columna-1; j <= pos_columna+1; j++){
							if (PosicionCorrecta(i, j) && matriz_minas[i][j] == true && (i!=pos_fila || j!=pos_columna))
								cuenta_minas++;
						}
					}
				}
			}
			else{
				cuenta_minas = -2;
			}
			return cuenta_minas;
		}
};
		
int main(){										//Programa principal
	TableroBuscaMinas un_tablero;			//Declaración del objeto
	const int TERMINADOR = -1;				//Declaración de constantes
	const int POSICION_ERROR = -2;
	int posicion_fila;						//Declaración de variables de entrada
	int posicion_columna;
	int minas_alrededor;						//Declaración de variables de salida
	
	cout << "Introduccion de minas(Para terminar introduzca -1 en alguna posicion)\n";
	cout << "Introduzca la fila: ";
	cin >> posicion_fila;
	cout << "Introduzca la columna: ";
	cin >> posicion_columna;
	cout << "\n";
	
	while (posicion_fila != TERMINADOR && posicion_columna != TERMINADOR){
		un_tablero.IntroduceMina(posicion_fila, posicion_columna);
		
		cout << "Introduzca la fila: ";
		cin >> posicion_fila;
		cout << "Introduzca la columna: ";
		cin >> posicion_columna;
		cout << "\n";
	}
	
	cout << "Minas alrededor de una posicion(Para terminar introduzca -1 en alguna posicion)\n";
	cout << "Introduzca la fila: ";
	cin >> posicion_fila;
	cout << "Introduzca la columna: ";
	cin >> posicion_columna;
	cout << "\n";
	
	while (posicion_fila != TERMINADOR && posicion_columna != TERMINADOR){
		minas_alrededor = un_tablero.EncuentraMinas(posicion_fila, posicion_columna);
		
		if (minas_alrededor == POSICION_ERROR){
			cout << "Posicion incorrecta.";
		}
		else{
			if (minas_alrededor == TERMINADOR)
				cout << "La posicion es una mina.";
			else
				cout << "Hay " << minas_alrededor << " minas alrederor de la casilla " << posicion_fila << "," << posicion_columna;
		}
		
		cout << "\n\nIntroduzca la fila: ";
		cin >> posicion_fila;
		cout << "Introduzca la columna: ";
		cin >> posicion_columna;
		cout << "\n";
	}
	
	system("pause");
}
