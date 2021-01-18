/*	Programa que leera el nombre de una persona y un tope de caracteres
	y nos dira un posible nombre de usuario a relacionado con su nombre
	real.
*/

#include <iostream>						//Inclusión recursos E/S

using namespace std;

//Definición la clase
class Login{
	private:		//Datos miembros privados
		int num_caracteres_a_coger;
	public:		//Métodos públicos
		//Constructor de la clase
		Login (int numero_caracteres_a_coger)
			:num_caracteres_a_coger(numero_caracteres_a_coger){
			}
			
			/*	Método para calcular el nombre de usuario */
			string Codifica(string nombre_completo){
				char caracter_leido;
				int contador= 0;
				int total_utilizados = nombre_completo.size();
				string login;
				
				for(int i=0; i < total_utilizados; i++){
					caracter_leido = tolower(nombre_completo[i]);
					
					if (contador < num_caracteres_a_coger && caracter_leido != ' '){
						login.push_back(caracter_leido);
						contador++;
					}
					else if (caracter_leido == ' '){
						contador = 0;
					}
				}
				
				return login;
			}
};

int main(){							//Programa principal
	int numero;						//Declaración de variables
	string nombre, usuario;
	char caracter;
	
	cout << "Introduzca el nombre: ";
	caracter = cin.get();
	
	while (caracter != '#'){
		nombre.push_back(caracter);
		caracter = cin.get();	
	}
	
	cout << "Introduzca el numero de caracteres a cojer por palabras: ";
	cin >> numero;
	
	Login nombre_usuario(numero);
	
	usuario = nombre_usuario.Codifica(nombre);

	cout << "\nEl login recomendado es: " << usuario << "\n\n";
	system("pause");
}
