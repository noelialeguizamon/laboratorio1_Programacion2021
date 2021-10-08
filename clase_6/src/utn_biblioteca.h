/*
 * utn_biblioteca.h
 *
 *  Created on: 7 sept. 2021
 *      Author: Legui
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef UTN_BIBLIOTECA_H_
#define UTN_BIBLIOTECA_H_

float utn_PedirFloat(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
char utn_PedirChar(char*pResult, char min, char max, int reintentos, char* variableTexto, char* textoError);
int utn_PedirInt(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);

#endif /* UTN_BIBLIOTECA_H_ */
