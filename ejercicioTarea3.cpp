#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
	
	int c;
	char *buffer;
	int indice = 0;
	buffer = new char [1000];
	
	cout<<("Ingrese el texto que desea para el programa:\n");
	
	c = getchar(); // leer un caracter desde el teclado
	
	while (c != EOF) { // repetir hasta que se encuentre el fin de la entrada
    	if (c != ' ' && c != '\t' ) { // si el caracter es un espacio y el anterior no lo era
      		putchar(c); // mostrarlo en pantalla
      		buffer[indice] = c; // guardarlo en el buffer
      		indice++; // incrementar el indice
    	}
   		c = getchar(); // leer otro caracter desde el teclado
  	}
  	
  	buffer[indice] = '\0';
  	cout<<" El texto se le han borrado los espacios y es el siguiente:"<<buffer<<endl;
  	delete[] buffer;
    return 0;
}
