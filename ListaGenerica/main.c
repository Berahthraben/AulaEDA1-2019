#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
void MostraInt(void *info){
  int *p = info;
  printf("%d\n", *p);
}

int main(void){
  Lista l;
  Inicializa_Lista(&l, 4);
  void *temp = malloc(sizeof(int));
  int a = 4;
  temp = &a;
  InserirListaInicio(&l, temp);
  MostraLista(&l, MostraInt);
  a = 5;
  InserirListaInicio(&l, temp);
  MostraLista(&l, MostraInt);
  a = 6;
  InserirListaFim(&l, temp);
  MostraLista(&l, MostraInt);
  void *auxrem = malloc(sizeof(int));
  RemoverListaFim(&l, auxrem);
  MostraLista(&l, MostraInt);
  RemoverListaInicio(&l, auxrem);
  MostraLista(&l, MostraInt);
  DesalocaLista(&l);
  return 0;
}

//SO TESTANDO FUNCOES
