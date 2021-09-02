/*
 ============================================================================
 Name        : ClaseTres.c
 Author      : Noelia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumar(int numUno, int numDos);
int restar(int numeroUno, int numeroDos);
int multiplicar(int primerNumero, int segundoNumero);
float dividir (int primerNum, int segundoNum, float* resultado);
int modulo(int primNum, int segNum);

int main(void) {
	setbuf(stdout, NULL);
	int numUno;
	int numDos;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoModulo;
	float promedio;
	//float impuesto;
	//float resultadoImpuesto;

	//pedir dos veces el dato a un usuario

	printf("ingrese un numero: \n");
	scanf("%d", &numUno);

	printf("ingrese otro numero: \n");
	scanf("%d", &numDos);

	resultadoSuma=sumar(numUno, numDos);  //sumarlo y hacer promedio
	printf("el resultado es %d", resultadoSuma);

	//promedio= (float)dividir(numUno, numDos); // se castea () una variable para darle a

	promedio= dividir(numUno,numDos,&promedio);

	if(promedio==1)
	{
		printf("\n no es posible dividir por cero \n");
	}
	else
	{
		printf("\nel valor dividido es %.2f", promedio);
	}

	//printf("el resultado es %d y el promedio es %.2f",resultadoSuma,promedio);

/*	printf("\n ingrese el impuesto abonado: \n");
	scanf("%f", &impuesto);

	resultadoImpuesto= resultadoSuma+impuesto;


	printf("\n el total abonado es %.2f \n", resultadoImpuesto);
*/
	resultadoResta= restar(numUno, numDos);
	resultadoMultiplicacion=multiplicar(numUno, numDos);
	resultadoModulo=modulo(numUno,numDos);
	printf("\nel resultado de la resta es %d , \nel de la multiplicacion es %d \ny el del modulo es %d",
			resultadoResta,resultadoMultiplicacion, resultadoModulo);


	return EXIT_SUCCESS;
}
int sumar(int numUno, int numDos)
{
	int retorno;
	retorno=numUno+numDos;
	return retorno;
}
int restar(int numeroUno, int numeroDos)
{
	int resultadoResta;
	resultadoResta=numeroUno-numeroDos;
	return resultadoResta;
}
int multiplicar(int primerNumero, int segundoNumero)
{
	int result;
	result=primerNumero*segundoNumero;
	return result;
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
int modulo(int primNum, int segNum)
{
	float resultadoModulo;
	resultadoModulo=primNum%segNum;
	return resultadoModulo;
}
