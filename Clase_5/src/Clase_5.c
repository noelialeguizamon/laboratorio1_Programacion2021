/*
 ============================================================================
 Name        : Clase_5.c
 Author      : Noelia Leguizamon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"


int main(void)					//probando los arrays
{	setbuf(stdout, NULL);
	char aNombre[20];

	printf("indique su nombre: ");
	fflush(stdin);
	scanf("%s", aNombre);		//se coloca %s para que tome todas las letras y no se pone & en el char array

	printf("su nombre es %s", aNombre);


	return EXIT_SUCCESS;
}
