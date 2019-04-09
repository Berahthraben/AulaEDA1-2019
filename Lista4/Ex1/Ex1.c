#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\udesc\Documents\ExerciciosLista4\Ex1\TDAs\Fila.h"
#include "C:\Users\udesc\Documents\ExerciciosLista4\Ex1\TDAs\pilha.h"
#include <time.h>

int main(void){
  Fila f;
  int i;
  int randi;
  Inicializa_fila(&f, 10);
  for(i=0;i<10;i++){
    randi = rand()%100;
    insere(&f, randi);
  }
  printf("Fila original:");
  printaFila(f);
  printf("Colocando em pilha e invertendo...\n");
  int temp;
  Pilha p;
  InicializaPilha(&p, 10);
  for(i=0;i<10;i++){
    temp = remover(&f);
    Empilha(&p, temp);
  }
  int vettemp[10];
  int aux=0;
  for(i=0;i<10;i++){
    temp = Desempilha(&p);
    vettemp[aux] = temp;
    aux++;
  }
  for(i=0;i<10;i++){
    printf(" %d", vettemp[i]);
  }
  printf("\n");
  return 0;
}
