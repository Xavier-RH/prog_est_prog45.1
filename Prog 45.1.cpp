/* Autor: Xavier Romero Hernández, Realizado: 09/05/2022 
	Hacer un programa que pida el nombre de un archivo e imprima su contenido en pantalla
	Imprimiendo caracter por caracter
	*/
	
	#include <stdio.h>
	#include "milibreria.h"
	
	int main(){
		char nombre[50], c;
		FILE *f;
		int n=0, lineas=0;
		
		leers("Nombre del archivo: ",nombre,50);
		f=fopen(nombre,"r");
		if(f==NULL){
			printf("Error al tratar de abri el archivo\n");
		}
		else{
			while(1){
				c=fgetc(f);
				printf("%c",c);
				n++;
				if(c==EOF){
					break;
				}
				else if(c==10){
					lineas++;
				}
			}
			fclose(f);
			printf("\n---------->El archivo contiene %d caracteres\n",n);
			printf("\n---------->El archivo contiene %d lineas\n",lineas);
		
		}
		
		return 0;
	}
