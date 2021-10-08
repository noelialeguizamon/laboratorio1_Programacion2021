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

float pedirFloatAUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
char pedirCharAlUsuario(char*pResult, char min, char max, int reintentos, char* variableTexto, char* textoError);
int pedirIntAUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);
int modulo(int primNum, int segNum);

#endif /* UTN_BIBLIOTECA_H_ */
