#include<iostream>
#include<cctype>

using namespace std;

int main(){
char letra;
int edad, anio;
bool es_minuscula, menor_mayor, es_bisiesto;

cout << "Introduzca la letra: ";
cin >> letra;
cout << "Introduzca la edad: ";
cin >> edad;
cout << "introduzca el anio: ";
cin >> anio;

es_minuscula = 97<=letra && letra<=122;									// 'a'<=letra && letra<='z'
menor_mayor = edad<18 || 65<edad;
es_bisiesto = (anio%4 == 0 && anio%100 != 0) || (anio%400 == 0);
	
	cout << "\nEs minuscula (0 no, 1 si)?  " << es_minuscula;
	cout << "\nEs menor de 18 o mayor de 65 (0 no, 1 si)?  " << menor_mayor;
	cout << "\nEs anio bisiesto (0 no, 1 si)?  " << es_bisiesto<< "\n\n";
}
