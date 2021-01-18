/*	Programa para calcular cual de las 3 empresas introducidas
	es la que mas ha vendido y lo muestra por pantalla
	haciendo uso de una clase.
*/

#include <iostream> 				//Inclusión recursos E/S

using namespace std;   

//Definición de la clase
class Ventas{
	private:		//Datos mienbros y metodos privados
		int ID_1 = 0;
		int ID_2 = 0;
		int ID_3 = 0;
		int num_ventas_1 = 0;
		int num_ventas_2 = 0;
		int num_ventas_3 = 0;
		int num_max_ventas = 0;
		int identif_sucursal_max_ventas = 0;
		
		/*	Método para comprobar que las cantidades introducidas
			sean positivas													*/
		bool CantidadCorrecta(int ventas){
		}
	public:		//Métodos publicos
		/*	Métodos para asignarle valores a los datos miembros */
		void ActualizaVentas(int identificador_sucursal, int unidades_vendidas){
		}
		
		void SetIdentificadores(int identificador_sucursal){
		}
		
		/*	Método para calcular la sucursal que mas ha vendido, cuanto
			ha vendido y devuelve la sucursal								*/
		int SucursalGanadora(){
		}
		
		/*	Método para devolver el valor de la sucursal que más
			ha vendido														*/
		int MaximoVentas(){
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
   cout << "\nVentas realizadas: " << ventas_empresa.MaximoVentas();	
	cout << "\n\n";
   system("pause");
}
