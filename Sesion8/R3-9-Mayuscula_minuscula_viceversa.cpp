/*	Programa que leera una letra y la pasara a mayuscula o minuscula.
	Si el caracter no es una letra se imprime tal cual.
*/	

#include <iostream>									//Inclusi�n recursos E/S

using namespace std;

const int DISTANCIA_MAY_MIN = 'a'-'A';

enum class TipoLetra
	{letra_mayuscula, letra_minuscula, caracter_no_alfabetico};

//Declaraci�n de funciones	
	
/*
	Funci�n que dira el tipo de caracter introducido
	y lo asignara a una variable.
*/
	
TipoLetra Capitalizacion(char una_letra){
	TipoLetra letra;
	
	if ('A' <= una_letra && una_letra <= 'Z'){
		cout << "\nSe ha introducido una letra mayuscula.";
		letra = TipoLetra::letra_mayuscula;
	}
	else{
		if ('a' <= una_letra && una_letra <= 'z'){
			cout << "\nSe ha introducido una letra minuscula.";
			letra = TipoLetra::letra_minuscula;
		}
		else{
			cout << "\nNo se ha introducido un caracter alfabetico.";
			letra = TipoLetra::caracter_no_alfabetico;
		}
	}
	cout << "\n\n";
	return letra;
}

/*
	Funci�n que convertira a may�scula una letra min�scula.
*/

char Convierte_a_Mayuscula(char caracter){
	TipoLetra letra;
	char letra_convertida;
	
	letra = Capitalizacion(caracter);
	
	if (letra == TipoLetra::letra_minuscula)
      letra_convertida = caracter - DISTANCIA_MAY_MIN;
   else
   	letra_convertida = caracter;
   
   return letra_convertida;
}

/*
	Funci�n que convertira a min�scula una letra may�scula.
*/

char Convierte_a_Minuscula(char caracter){
	TipoLetra letra;
	char letra_convertida;
	
	letra = Capitalizacion(caracter);
	
	if (letra == TipoLetra::letra_mayuscula)
      letra_convertida = caracter + DISTANCIA_MAY_MIN;
   else
   	letra_convertida = caracter;
   
   return letra_convertida;
}

/*
	Funci�n que leera un valor, llamara a la funcion Capitalizacion
	y realizara el cambio de caracter segun sea may�scula a min�scula,
	viceversa o imprimirlo tal cual si no es alfabetico.
*/

char CambiaMayusculaMinuscula(char caracter){
	TipoLetra letra;
	char letra_convertida;
	
	letra = Capitalizacion(caracter);
	
	if (letra == TipoLetra::letra_mayuscula)
      letra_convertida = caracter + DISTANCIA_MAY_MIN;    
	else if (letra == TipoLetra::letra_minuscula)
		letra_convertida = caracter - DISTANCIA_MAY_MIN;
	else
		letra_convertida = caracter;
	
	return letra_convertida;
}

int main(){    								//Programa principal  
   char letra_original;						//Declaraci�n variable de entrada
     
   cout << "Introduzca una letra: ";
   cin >> letra_original;
   
   cout << "Caracter convertido: " << CambiaMayusculaMinuscula(letra_original);
   cout << "\n\n";
	system("pause");
}
   
   
