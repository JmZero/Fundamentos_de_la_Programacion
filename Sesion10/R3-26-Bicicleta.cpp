/*	Programa para ver la movilidad de los piñones
	de una bicicleta implementado por clases.
*/

#include <iostream>				//Inclusión recursos
#include <cctype>

using namespace std;

//Definición de la clase
class Bicicleta{
	private:				//Datos miembro y métodos privados
		int estrella = 1;
		int pinion = 1;
		
		/*	Métodos para comprobar si de pueden realizar las acciones
			de subida y bajada del piñon y la estrella sin riesgo de 
			ruptura.																*/
		bool CorrectosSubeEstrella(){
			return (estrella == 1 && pinion != 1 && pinion != 7) || (estrella == 2 && pinion > 3);
		}
		
		bool CorrectosBajaEstrella(){
			return (estrella == 2 && pinion < 5) || (estrella == 3 && pinion != 1 && pinion != 7);
		}
		
		bool CorrectosSubePinion(){
			return (estrella == 1 && pinion < 4) || (estrella == 2 && pinion != 1 && pinion < 6) || (estrella == 3 && pinion > 3);
		}
		
		bool CorrectosBajaPinion(){
			return (estrella == 1 && pinion < 5) || (estrella == 2 && pinion > 2 && pinion != 7) || (estrella == 3 && pinion > 4);
		}
		
		bool CorrectosSube2Pinion(){
			return (estrella == 1 && pinion < 3) || (estrella == 2 && pinion != 1 && pinion < 5) || (estrella == 3 && pinion > 3);
		}
		
		bool CorrectosBaja2Pinion(){
			return (estrella == 1 && pinion < 5) || (estrella == 2 && pinion > 3 && pinion != 7) || (estrella == 3 && pinion > 5);
		}
	public:			//Métodos publicos
		/*	Métodos para devolver el valor de los datos miebros privados*/
		int Estrella(){
			return estrella;
		}
		
		int Pinion(){
			return pinion;
		}
		
		/*Método para realizar los cambios dependiendo la ra rueda elegida*/
		void CambiaEstrellaPinion(char opcion_rueda, char opcion_accion){
			opcion_rueda = toupper(opcion_rueda);
			
			if (opcion_rueda == 'E')
				CambiaEstrella(opcion_accion);
			if (opcion_rueda == 'P')
				CambiaPinion(opcion_accion);
		}
		
		/*Método para realizar los cambios en la estrella*/
		void CambiaEstrella(char opcion){
			const int estrella_max = 3;
			const int estrella_min = 1;
			
			opcion = toupper(opcion);
			
			if (opcion == 'S' && estrella < estrella_max && CorrectosSubeEstrella())
				estrella++;
			if (opcion == 'B' && estrella > estrella_min && CorrectosBajaEstrella())
				estrella--;
		}
		
		/*Método para realizar los cambios en el piñon*/
		void CambiaPinion(char opcion){
			const int pinion_max = 7;
			const int pinion_min = 1;
			
			opcion = toupper(opcion);
			
			if (opcion == 'S' && pinion < pinion_max && CorrectosSubePinion())
				pinion++;
			if (opcion == 'B' && pinion > pinion_min && CorrectosBajaPinion())
				pinion--;
			if (opcion == 'T' && pinion < pinion_max - 1 && CorrectosSube2Pinion())
				pinion = pinion + 2;
			if (opcion == 'C' && pinion > pinion_min + 1 && CorrectosBaja2Pinion())
				pinion = pinion - 2;
		}
};

int main(){											//Programa principal
	Bicicleta una_bicicleta;					//Definición del objeto
	char opcion_rueda, opcion_accion;		//Definición de las variables de entrada
	
	cin >> opcion_rueda;
	
	while (opcion_rueda != '#'){
		cin >> opcion_accion;
		una_bicicleta.CambiaEstrellaPinion(opcion_rueda, opcion_accion);
		cin >> opcion_rueda;
	}
	
	cout << "\nEstrella=" << una_bicicleta.Estrella() << " y pinion=" << una_bicicleta.Pinion() << "\n\n";

}
