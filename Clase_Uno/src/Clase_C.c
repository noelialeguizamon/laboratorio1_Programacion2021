/*
 ============================================================================
 Name        : Clase_C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	setbuf (stdout,NULL);	//sirve para limpiar el buffer del teclado.
							//para que no traiga basura

/*	printf ("!!!Esta es la primera clase!!!"); // prints !!!Hello World!!!
	int numero;
	int suma;

	printf("\n ingrese un numero: \n");
	scanf("%d", &numero);

	suma = numero + numero;

	printf("\n la suma es %d",suma);
*/
	//declaro las variables
	int num1=0;
	int num2=0;
	int resta=0;

	//pedimos al usuario
	printf("\n ingrese un numero: \n");
		scanf("%d", &num1);
	printf("\n ingrese otro numero: \n");
		scanf("%d", &num2);

	//calculamos
	resta = num1 - num2;

	//mostramos el resultado
	printf("\n la resta es %d", resta);


	return 0;
}
