/*
 ============================================================================
 Name        : claseCuatro.c
 Author      : Noelia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define REINTENTOS 3

float pedirUnFloatAlUsuario(float* pResultado, float min, float max, int reintentos);
float dividir (int primerNum, int segundoNum, float* resultado);

int main(void)
{
	setbuf(stdout, NULL);
	float num1;
	float num2;
	float resultado;
	//int estado;

	if(pedirUnFloatAlUsuario(&num1, 0.0, 1000.0, REINTENTOS)==0)
	{
		if(pedirUnFloatAlUsuario(&num2, 0.0, 1000.0, REINTENTOS)==0)
		{
			dividir(num1,num2,&resultado);
		}
		else
		{
			printf("estas fuera de rango!!!");
		}
	}
	printf("el 1er numero es %.2f \n", num1);
	printf("el 2do numero es %.2f \n", num2);
	printf("el resultado de la division es %.2f", resultado);

	return 0;
}

float pedirUnFloatAlUsuario(float* pResultado, float min, float max, int reintentos)
{	int i;
	int estado;
	float numero;

	for (i=0; i<=reintentos;i++)
	{
		printf("ingrese un numero: ");
		scanf("%f", &numero);

		if(numero>=min && numero<=max)
			{
			estado=0;  //esta ok
			*pResultado=numero;
			break;
			}else
			{
				estado=1; // no esta ok
				printf("\n error de ingreso.\ningrese un numero valido entre %.2f y %.2f \n", min, max);
			}
	}
			return estado;
}


float dividir (int primerNum, int segundoNum, float* resultado)
{
	int retorno=0;
	if (segundoNum!=0)
		{
		*resultado=(float)primerNum/segundoNum;
		}
	else { retorno=1;}

	return retorno;
}

/*
float pedirUnFloatAlUsuario(float* pResultado, float min, float max);

int main(void)
{
	setbuf(stdout, NULL);
	float num1;
	//float num2;
	int estado;

	if(pedirUnFloatAlUsuario(&num1, 0.0, 1000.0)==0)
	{
		printf("el resultado es %f \n", num1);
	}
	else
	{
		printf("estas fuera de rango!!!");

	}

	return 0;
}

float pedirUnFloatAlUsuario(float* pResultado, float min, float max)
{
	int estado;
	printf("ingrese un numero: ");
	float numero;
	scanf("%f", &numero); // va sin & xq ya es *la direccion de memoria

	if(numero>=min && numero<=max)
	{
		estado=0;  //esta ok
		*pResultado=numero;
	}else
	{
		estado=1; // no esta ok
	}

		return estado;
}


*/


/*                          // no puedo hacer funcionar el if de la funcion main :(

float pedirUnFloatAlUsuario(float* pResultado,float min, float max);
float sumar(float numUno, float numDos);
int main(void)
{
	setbuf(stdout, NULL);
	float num1;
	float num2;
//	float result;
	int estado=0;

	pedirUnFloatAlUsuario(&num1, 0.00, 1000.00);

					//validar que los numeros vayan de o a 1000 sino printear que esta mal el numero
	if(estado==0)
	{

		printf("el resultado es %f \n", num1);
	}
	else {

		printf("estas fuera de rango!!!");
	}

	pedirUnFloatAlUsuario(&num2, 0.00, 1000.00);

	if (estado==0)
	{

	printf("el resultado es %f", num2);
	}
	else {

	printf("estas fuera de rango!!!");
	}

			return 0;
}

float pedirUnFloatAlUsuario(float* pResultado, float min, float max)
{
	int estado;
	printf("ingrese un numero: ");
	float numero;
	scanf("%f", &numero); // va sin & xq ya es *la direccion de memoria

if(numero>=min && numero<=max)
	{
		*pResultado=numero;
			estado=0;  //esta ok
	}else
	{
		estado=1; // no esta ok
	}

		return estado;
}

float sumar(float numUno, float numDos)
	{
	float retorno;
		retorno=numUno+numDos;
	return retorno;
	}*/

/*	pedirUnFloatAlUsuario(&num1);
	pedirUnFloatAlUsuario(&num2);
					//validar que los numeros vayan de o a 1000 sino printear que esta mal el numero
	result= sumar(num1,num2);

	printf("el resultado es %.2f" ,result);

			return 0;
}

void pedirUnFloatAlUsuario(float* pResultado) 	// no es necesario que te devuelva
													// algo ya esta en la direccion de memoria
	{
		printf("ingrese un numero: ");
		scanf("%f", pResultado); // va sin & xq ya es *la direccion de memoria
	}

int sumar(int numUno, int numDos)
	{
		int retorno;
		retorno=numUno+numDos;
		return retorno;
}
*/
