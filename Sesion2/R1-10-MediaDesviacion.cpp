/* Programa para calcular la media y la desviaci�n tipica
	de la altura de 3 personas.
	Necesitamos: altura de cada una de las personas.
	Calculamos: media y desviaci�n tipica.
*/

#include<iostream>													//Inclusi�n recursos E/S
#include<cmath>														//Inclusi�n recursos matematicos

using namespace std;

int main(){																//Programa principal
	double altura1, altura2, altura3;							//Declaraci�n de variables de entrada
	int n=3;
	double sumatoria_media, sumatoria_desviacion;			//Declaraci�n de variables auxiliares
	double media, desviacion;										//declaraci�n de variables de salida
	
	cout << "Introduzca la altura de la primera persona: ";
	cin >> altura1;
	cout << "Introduzca la altura de la segunda persona: ";
	cin >> altura2;
	cout << "Introduzca la altura de la tercera persona: ";
	cin >> altura3;
	
	sumatoria_media = altura1 + altura2 + altura3;
	media = sumatoria_media/n;
	
	sumatoria_desviacion = pow((altura1 - media),2) + pow((altura2 - media),2) + pow((altura3 - media),2);
	desviacion = sqrt(sumatoria_desviacion/n);
	
	cout << "\nLa media de las alturas es: " << media;
	cout << "\nLa desviacion tipica de las alturas es: " << desviacion << "\n\n";
	
	system("pause");
}
