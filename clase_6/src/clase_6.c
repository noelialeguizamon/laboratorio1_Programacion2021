/*
 ============================================================================
 Name        : clase_6.c
 Author      : Noelia Leguizamon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 * Ejercicio 1:
 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu ppal.
 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"
#define TEMPERATURA_LEN 31

void inicializarArrays (int arrayAInicializar[], int len, int valorInicial); //len por lengh cantidad
int imprimirArray(int arrayAImprimir[], int len);

int main(void){
	setbuf(stdout, NULL);
	float temperaturaMax;
	int temperaturaPorDia[TEMPERATURA_LEN];
	int menuOpciones;

	do
	{
		printf("elige la opcion(1, 2 o 3) :");
		fflush (stdin);
		scanf("%d", &menuOpciones);

		switch(menuOpciones){
			case 1:
				printf("\nUd ingreso la opcion %d\n", menuOpciones);
				break;
			case 2:
				printf("\nUd ingreso la opcion %d\n", menuOpciones);
				break;
			case 3:
				printf("\nUd ingreso la opcion %d\n, bye bye", menuOpciones);
				break;
			default:
				printf("Ud ingreso una opcion incorrecta\n");

		}

	}while(menuOpciones!=3);


	if (menuOpciones==1)
	{
		imprimirArray(temperaturaMax,TEMPERATURA_LEN);
	}

	return EXIT_SUCCESS;
}

void inicializarArrays (int arrayAIniciar[], int len, int valorInicial)
{
	int indice;
	for(indice=0; indice<len; indice++)
	{
		arrayAIniciar[indice]= valorInicial;
	}

int imprimirArray(int arraysAImprimir[], int len)
{
	int indice;
	int retorno=-1;

	for(indice=0; indice<len; indice++)
	{
		printf("%d\n",arraysAImprimir[indice]);
		retorno=0;
	}
	return retorno;
}
