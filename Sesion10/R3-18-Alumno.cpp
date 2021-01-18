/*	Programa que leera el nombre de un alumno, su apellido, dni y notas
	y calculara lanota final de este haciendo uso de clases.
*/

#include <iostream>									//Inclusión recursos E/S

using namespace std;

//Definición de la clase
class AlumnoFP{
	private:												//Datos y metodos privados
		string nombre_alumno;
		string primer_apellido;
		string DNI;
		double teorica = 0.0;
		double parcial_pract1 = 0.0;
		double parcial_pract2 = 0.0;
		double participacion_clase = 0.0;
		
		/*	Método para comprobar que las notas se encuentran entre 0 y 10 */
		bool NotasCorrectas(double teoria, double primer_parcial, double segundo_parcial, double participacion){
			return 0 <= teoria && teoria <= 10 && 0 <= primer_parcial && primer_parcial <= 10 &&
					 0 <= segundo_parcial && segundo_parcial <= 10 && 0 <= participacion && participacion <= 10;
		}
	public:												//Datos y metodos públicos
		//Constructor de la clase
		AlumnoFP(string nombre, string apellido, string dni, double teoria, 
					 double primer_parcial, double segundo_parcial, double participacion){
			SetDatosAlumno(nombre, apellido, dni);
			SetNotasAlumno(teoria, primer_parcial, segundo_parcial, participacion);		 
		}
		
		//Constructor de la clase
		AlumnoFP(string nombre, string apellido, string dni)
			:AlumnoFP(nombre, apellido, dni, 0.0, 0.0, 0.0, 0.0){
			}
			
		/*	Método para asignar los datos del alumno a los datos privados */
		void SetDatosAlumno(string nombre, string apellido, string dni){
			nombre_alumno = nombre;
			primer_apellido = apellido;
			DNI = dni;
		}
		
		/*	Método para asignar las notas del alumno a los datos privados */
		void SetNotasAlumno(double teoria, double primer_parcial, double segundo_parcial, double participacion){
			if (NotasCorrectas(teoria, primer_parcial, segundo_parcial, participacion)){
				teorica = teoria;
				parcial_pract1 = primer_parcial;
				parcial_pract2 = segundo_parcial;
				participacion_clase = participacion;
			}
		}
		
		/*	Métodos para devolver los valores de los datos privados */
		string Nombre(){
			return nombre_alumno;
		}
		
		string Apellido(){
			return primer_apellido;
		}
		
		string Dni(){
			return DNI;
		}
		
		double NotaTeoria(){
			return teorica;
		}
		
		double NotaPrimerParcial(){
			return parcial_pract1;
		}
		
		double NotaSegundoParcial(){
			return parcial_pract2;
		}
		
		double NotaParticipacion(){
			return participacion_clase;
		}
		
		/*	Método para calcular la nota final del alumno conociendo el
			porcentaje del valor de cada parte */
		double NotaFinal(){
			double IV_porcentaje_teoria = 0.7;
			double IV_porcentaje_primer_parcial = 0.05;
			double IV_porcentaje_segundo_parcial = 0.15;
			double IV_porcentaje_participacion = 0.1;
			double nota_final;
			
			nota_final = teorica * IV_porcentaje_teoria + parcial_pract1 * IV_porcentaje_primer_parcial +
							 parcial_pract2 * IV_porcentaje_segundo_parcial + participacion_clase * IV_porcentaje_participacion;
			
			return nota_final;
		}
		
		/*	Método para comprobar si las notas son superiores a 5 */
		double NotaInferior(double nota){
			return nota < 5;
		}
};

int main(){																				//Programa principal
	string nombre, apellido, dni;													//Declaración de variables de entrada
	double teoria, primer_parcial, segundo_parcial, participacion;
	
	cout << "Datos del alumno.\n";
	cout << "Nombre: ";
	cin >> nombre;
	cout << "Apellido: ";
	cin >> apellido;
	cout << "DNI: ";
	cin >> dni;
	cout << "\nNotas del alumno.\n";
	cout << "Teoria: ";
	cin >> teoria;
	cout << "Primer parcial: ";
	cin >> primer_parcial;
	cout << "Segundo parcial: ";
	cin >> segundo_parcial;
	cout << "Participacion en clase: ";
	cin >> participacion;
	
	AlumnoFP un_alumno (nombre, apellido, dni, teoria, primer_parcial, segundo_parcial, participacion);		//Declaración de objeto con constructor
	
	if (un_alumno.NotaInferior(un_alumno.NotaTeoria()))
		cout << "\nLa nota de la parte teorica es " << un_alumno.NotaTeoria();
		
	if (un_alumno.NotaInferior(un_alumno.NotaPrimerParcial()))
		cout << "\nLa nota del primer parcial es " << un_alumno.NotaPrimerParcial();
		
	if (un_alumno.NotaInferior(un_alumno.NotaSegundoParcial()))
		cout << "\nLa nota del segundo parcial es " << un_alumno.NotaSegundoParcial();

	if (un_alumno.NotaInferior(un_alumno.NotaParticipacion()))
		cout << "\nLa nota de la participacion en clase es " << un_alumno.NotaParticipacion();
		
	cout << "\nLa nota final de " << un_alumno.Nombre()<< " " << un_alumno.Apellido() << " es: " << un_alumno.NotaFinal();
	cout << "\n\n";
	
	system("pause");
}
