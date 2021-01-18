/*	Programa para calcular cual de las 3 empresas introducidas
	es la que mas ha vendido y lo muestra por pantalla
	haciendo uso de una clase.
*/

#include <iostream> 				//Inclusión recursos E/S

using namespace std;   

//Definición de la clase
class Ventas{
	private:		//Datos mienbros y metodos privados
		static const int TAMANIO = 100;
		int sucursales[TAMANIO] = {0};
		
		/*	Métodos para comprobar que las cantidades introducidas
			sean positivas	y las sucursales existan				*/
		bool CantidadCorrecta(int ventas){
			return ventas >= 0;
		}
		bool SucursalesCorrectas(int sucursal){
			return 0 <= sucursal && sucursal < TAMANIO;
		}
	public:		//Métodos publicos
		/*	Métodos para asignarle valores a los datos miembros */
		void ActualizaVentas(int identificador_sucursal, int unidades_vendidas){
			if (CantidadCorrecta(unidades_vendidas) && SucursalesCorrectas(identificador_sucursal)){;
				sucursales[identificador_sucursal] = sucursales[identificador_sucursal] + unidades_vendidas;
	      }
		}
		
		/*	Método para calcular la sucursal que mas ha vendido, cuanto
			ha vendido y devuelve la sucursal								*/
		int SucursalGanadora(){
			int num_max_ventas;
      	int identif_sucursal_max_ventas;
			int i = 0;
			
			num_max_ventas = sucursales[i];
			identif_sucursal_max_ventas = i;
		
			for(i = 1; i < TAMANIO; i++){
		   	if (sucursales[i] > num_max_ventas){
		      	num_max_ventas = sucursales[i];  
		      	identif_sucursal_max_ventas = i;
		   	}
			}
		   return identif_sucursal_max_ventas;
		}
		
		/*	Método para devolver el valor de la sucursal que más
			ha vendido														*/
		int MaximoVentas(int identificador){
			int i = 0;
			
			while (i != identificador){
				i++;
			}
			return sucursales[i];
		}
};
		 
int main(){												//Programa principal
	Ventas ventas_empresa;							//Declaración de objetos
	const int TERMINADOR = -1;						//Declaración de constante
   int identif_sucursal, unidades_vendidas;	//Declaración de variables de entrada
   char cod_producto;

   cout << "Se procede a leer datos del fichero ... \n";;

   /* 
      Mientras que la sucursal sea distinto a TERMINADOR
         Leer datos de la sucursal
         Actualizar número de unidades vendidas de la sucursal que se haya introducido
   */

   cin >> identif_sucursal;  
     
   while (identif_sucursal != TERMINADOR){              
      cin >> cod_producto;
      cin >> unidades_vendidas;

		ventas_empresa.ActualizaVentas(identif_sucursal, unidades_vendidas);
		    
      cin >> identif_sucursal;   
   }
  
   cout << "\nSucursal ganadora: " << ventas_empresa.SucursalGanadora();
   cout << "\nVentas realizadas: " << ventas_empresa.MaximoVentas(ventas_empresa.SucursalGanadora());	
	cout << "\n\n";
   system("pause");
}
