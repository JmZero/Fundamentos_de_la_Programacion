/* Programa para calcular la media y la desviación tipica
	de la altura de 3 personas. Tras esto nos mostrara si
	las alturas son iguales o superiores a la media o si
	son inferiores. Hecho por separación E/S.
*/

#include <iostream>																	//Inclusión recursos E/S
#include <cmath>																		//Inclusión recursos matematicos
#include <string>																		//Inclusion recursos texto

using namespace std;

int main(){ 																						//Programa principal
	const string MENOR_MEDIA = " cm, esta por debajo de la media.";				//Declaracion de constantes
	const string MAYOR_MEDIA = " cm, esta por encima o es igual a la media.";
	const string ALTURA_PRIMERA = "\nLa altura de la primera persona, ";
	const string ALTURA_SEGUNDA = "\nLa altura de la segunda persona, ";
	const string ALTURA_TERCERA = "\nLa altura de la tercera persona, ";
	int altura1, altura2, altura3;															//Declaración de variables de entrada
	int n=3;
	double sumatoria_media, sumatoria_desviacion;										//Declaración de variables auxiliares
	bool condicion1, condicion2, condicion3;									
	double media, desviacion;																	//declaración de variables de salida
	
	cout << "Introduzca la altura de la primera persona (en cm): ";
	cin >> altura1;
	cout << "Introduzca la altura de la segunda persona (en cm): ";
	cin >> altura2;
	cout << "Introduzca la altura de la tercera persona (en cm): ";
	cin >> altura3;
	
	sumatoria_media = altura1 + altura2 + altura3;
	media = sumatoria_media/n;
	
	sumatoria_desviacion = pow((altura1 - media),2) + pow((altura2 - media),2) + pow((altura3 - media),2);
	desviacion = sqrt(sumatoria_desviacion/n);
	
	condicion1 = altura1 < media;
	condicion2 = altura2 < media;
	condicion3 = altura3 < media;
	
	cout << "\nLa media de las alturas es: " << media;
	cout << "\nLa desviacion tipica de las alturas es: " << desviacion << "\n";
	
	if (condicion1)
		cout << ALTURA_PRIMERA << altura1 << MENOR_MEDIA;
	else
		cout << ALTURA_PRIMERA << altura1 << MAYOR_MEDIA;
	
	if (condicion2)
		cout << ALTURA_SEGUNDA << altura2 << MENOR_MEDIA;
	else
		cout << ALTURA_SEGUNDA << altura2 << MAYOR_MEDIA;
	
	if (condicion3)
		cout << ALTURA_TERCERA << altura3 << MENOR_MEDIA << "\n\n";
	else
		cout << ALTURA_TERCERA << altura3 << MAYOR_MEDIA << "\n\n";
	
	system("pause");
}
