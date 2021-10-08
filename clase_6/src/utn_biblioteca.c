/*
 * utn_biblioteca.c
 *
 *  Created on: 7 sept. 2021
 *      Author: Legui
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"

float utn_PedirFloat(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError)
{
	float buffer;
	int retorno=-1;
	int i;
	int salidaScanf;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for (i=0; i<=reintentos; i++)
		{
			printf("%s",variableTexto);
			salidaScanf=scanf("%f", &buffer);

			printf("\nLa salida del scanf es : %d\n\n",salidaScanf);
			if (salidaScanf>0 && buffer>=min && buffer<=max)
			{

				retorno = 0; // OK
				*pResultado=buffer;
				break;
			}
			else
			{
				retorno=-2;
				printf("%s\n",textoError);
			}
		}
	}
	return retorno;
}

char utn_PedirChar(char*pResult, char min, char max, int reintentos, char* variableTexto, char* textoError)
{
	char buffer;
	int retorno=-1;
	int i;
	int salidaScanf;    //me muestra el estado del scanf= 1 (tiene algo asignado) 0 (no tiene nada asignado)

	if(pResult!=NULL && reintentos>=0 && variableTexto!=NULL && textoError!=NULL)
	{
		for(i=0; i<=reintentos; i++)
		{
			printf("%s", variableTexto);
			fflush(stdin);
			salidaScanf=scanf("%c", buffer);

			if(salidaScanf>0 && buffer>=min && buffer<=max)
			{
				retorno=0;
				*pResult=buffer;
				break;

			}else
			{
				retorno=-2;
				printf("%s", textoError);
			}
		}

	}

	return retorno;
}

int utn_PedirInt(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError)
{
	int buffer;
	int retorno=-1;
	int i;
	int salidaScanf;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for (i=0; i<=reintentos; i++)
		{
			printf("%s",variableTexto);
			salidaScanf=scanf("%d", &buffer);

			printf("\nLa salida del scanf es : %d\n\n",salidaScanf);
			if (salidaScanf>0 && buffer>=min && buffer<=max)
			{

				retorno = 0; // OK
				*pResultado=buffer;
				break;
			}
			else
			{
				retorno=-2;
				printf("%s\n",textoError);
			}
		}
	}
	return retorno;
}

