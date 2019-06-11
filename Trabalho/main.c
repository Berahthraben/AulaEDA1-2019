#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Matriz.h"


int main(void){
	MatrizEsp m;
	Inicializa_MatrizEsp(&m, 5, 5);
	MostraMatriz(&m);
	EntradaMatriz en;
	en.coluna = 2;
	en.valor = 3;
	void *temp = &en;
	int temp2 = EditaValor(&m, 3, 2, temp);
	MostraMatriz(&m);
	en.coluna = 6;
	temp2 = EditaValor(&m, 3, 6, temp);
	MostraMatriz(&m);
	en.coluna = 7;
	temp2 = EditaValor(&m, 6, 7, temp);
	MostraMatriz(&m);
	return 0;
}
