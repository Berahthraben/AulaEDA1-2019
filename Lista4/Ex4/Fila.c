#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

void Inicializa_Fila(Fila *f, int size, int taminfo){
  f->dados = malloc(sizeof(int)*size);
  f->tam_info = taminfo;
  f->nroelem = 0;
  f->inicio = 0;
  f->fim = 0;
  f->capacidade = size;
}
void InsereInicio(Fila *f, int nro){
  if(TestaCheia(*f)==CHEIA){
    printf("Fila cheia!\n");
    return;
  }
  f->dados[f->fim] = nro;
  f->nroelem++;
  if(f->fim==f->capacidade){
    f->fim=0;
  }else{
    f->fim++;
  }
}
int RemoveInicio(Fila *f){
  if(TestaVazia(*f)==VAZIA){
    printf("Fila vazia!\n");
    return VAZIA;
  }
  int temp = f->dados[f->inicio];
  f->dados[f->inicio] = 0;
  if(f->inicio==f->capacidade){
    f->inicio=0;
  }else{
    f->inicio++;
  }
  f->nroelem--;
  return temp;
}
void InsereFim(Fila *f, int nro){
  if(TestaCheia(*f)==CHEIA){
    printf("Fila cheia!\n");
    return;
  }
  f->nroelem++;
  if(f->fim==f->capacidade){
    f->fim=0;
  }else{
    f->fim++;
  }
  f->dados[f->fim] = nro;
}
int RemoveFim(Fila *f){
  if(TestaVazia(*f)==VAZIA){
    printf("Fila vazia!\n");
    return VAZIA;
  }
  int temp = f->dados[f->fim-1];
  if(f->fim==0){
    f->fim=f->capacidade;
  }else{
    f->fim--;
  }
  f->nroelem--;
  return temp;
}
void FreeFila(Fila *f){
  free(f->dados);
  free(f);
}
int TestaVazia(Fila f){
  if(f.inicio == f.fim){
    return VAZIA;
  }else{
    return 0;
  }
}
int TestaCheia(Fila f){
  if(f.nroelem==f.capacidade){
    return CHEIA;
  }
  return 0;
}
void MostraFila(Fila f){
  //printf("Nro de elementos: %d\n", f.nroelem);
  //printf("Capacidade: %d\n", f.capacidade);
  //printf("Inicio: %d\n", f.inicio);
  //printf("Fim: %d\n", f.fim);
  //printf("TamInfo: %d\n", f.tam_info);
  printf("Fila: \n");
  int i;
  if(f.inicio > f.fim){
    for(i=0;i<f.fim+1;i++){
      printf(" | %d", f.dados[i]);
    }
    for(i=f.fim+1;i<f.inicio;i++){
      printf(" | 0");
    }
    for(i=f.inicio;i<f.capacidade;i++){
      printf(" | %d", f.dados[i]);
    }
  }else{
    for(i=0;i<f.inicio;i++){
      printf(" | 0");
    }
    for(i=f.inicio;i<f.fim;i++){
      printf(" | %d", f.dados[i]);
    }
    for(i=f.fim;i<f.capacidade;i++){
      printf(" | 0");
    }
  }
  printf(" |\n");
}
