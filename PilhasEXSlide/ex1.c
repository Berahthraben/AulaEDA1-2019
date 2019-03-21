#include <stdio.h>
#include "pilha.h"

int main(void){
    Pilha p1;
    printf("Inicializando...\n");
    InicializaPilha(&p1, 2);
    Empilha(&p1, 5);
    MostraPilha(p1);
    Empilha(&p1, 6);
    MostraPilha(p1);
    Empilha(&p1, 7);
    MostraPilha(p1);
    Desempilha(&p1);
    MostraPilha(p1);
    Empilha(&p1, 20);
    MostraPilha(p1);
    Empilha(&p1, 200);
    MostraPilha(p1);
    Desempilha(&p1);
    MostraPilha(p1);
    Desempilha(&p1);
    MostraPilha(p1);
    Desempilha(&p1);
    MostraPilha(p1);
    Desempilha(&p1);
    MostraPilha(p1);
    Desempilha(&p1);
    MostraPilha(p1);
    printf("O topo está em %d\n", OlhaTopo(p1));
    return 0;
}
