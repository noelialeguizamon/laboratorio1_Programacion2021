/*
 * utn_Arrays.c
 *
 *  Created on: 14 sept. 2021
 *      Author: Legui
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"
#include "utn_arrays.h"

void inicializarArrays (float arrayAIniciar[], int len, int valorInicial)
{
	int indice;
	for(indice=0; indice<len; indice++)
	{
		arrayAIniciar[indice]= valorInicial;
	}
}

int imprimirArray(float arraysAImprimir[], int len)
{
		int indice;
		int retorno=-1;

		for(indice=0; indice<len; indice++)
		{
			printf("%.2f\n",arraysAImprimir[indice]);
			retorno=0;
		}
	return retorno;
}

void cargarArray(float temperaturaXDia[]){
	int dia;

	float temperatura;

	printf("\nindique el numero del dia:");
	scanf("%d", &dia);
	printf("\n\nIndique la temperatura de ese dia: ");
	scanf("%f",&temperatura);


	temperaturaXDia[dia-1] = temperatura;
}

void inicializarArray()
{

}

int pedirArraysDeNumeros()
{

}








//los arrays se pasan por referencia siempre
