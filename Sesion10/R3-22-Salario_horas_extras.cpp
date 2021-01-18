/*	Programa que leera desde teclado las horas trabajadas
	y el precio de la hora y calculara el salario final
	de un trabajador usando una clase.
*/

#include <iostream>							//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class Nomina{
	private:			//Datos mienbros privados
		double horas_trabajadas = 0.0;
		double precio_por_hora = 0.0;
		double cotizacion_min_extra = 40.0;
		double porcentaje_horas_extra = 50.0;
	public:			//Métodos publicos
		//Constructor de la clase
		Nomina(double horas, double precio){
			SetDatosNomina(horas, precio);
		}
		
		/*	Método para asignar valores a datos miembros	*/
		void SetDatosNomina(double horas, double precio){
			horas_trabajadas = horas;
			precio_por_hora = precio;
		}
		
		/*	Métodos para cambiar los valores iniciales de porcentaje y
			la cotización mínima													*/
		void SetHorasMinimas(double minimo_extra){
			cotizacion_min_extra = minimo_extra;
		}
		
		void SetPorcentajeExtra(double porcentaje_extra){
			porcentaje_horas_extra = porcentaje_extra;
		}
		
		/*	Método para calcular el salario del tabajador*/
		double SalarioTotal(){
			double horas_restantes;
			double salario;
			double IV_precio_extra = precio_por_hora * (1 + porcentaje_horas_extra / 100.0);
			
			if (horas_trabajadas <= cotizacion_min_extra)
				salario = horas_trabajadas * precio_por_hora;
			else{
					horas_restantes = horas_trabajadas - cotizacion_min_extra;
					salario = cotizacion_min_extra * precio_por_hora + horas_restantes * IV_precio_extra;
			}
			return salario;
		}
};


int main(){																//Programa principal
	double precio_hora, horas_trabajo;							//Declaración de variables de entrada
		
	cout << "Introduzca el numero de horas trabajadas: ";
	cin >> horas_trabajo;
	cout << "Introduzca el precio por hora: ";
	cin >> precio_hora;
	
	Nomina un_trabajador(horas_trabajo, precio_hora);
	
	cout << "\nEl salario del trabajador es de " << un_trabajador.SalarioTotal()<< " euros.\n\n";
	system("pause");
}
