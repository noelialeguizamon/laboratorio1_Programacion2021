/*
 ============================================================================
 Name        : ClaseUno_Bis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
	 */

	#include <stdio.h>
	#include <stdlib.h>
	#define CLIENTES 3

	int main() {
		int num;
		int suma=0;
		int i;
		setbuf(stdout, NULL);

		for (i=0; i<CLIENTES; i++)
		{
			printf("\n ingrese un numero: ");
			scanf("%d", &num);
			suma= suma + num;
		}

		printf(" la suma de los numeros es %d ", suma);

		return 0;

	}
