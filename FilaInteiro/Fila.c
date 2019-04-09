#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

void Inicializa_fila(Fila *f, int capacidade){
  f->dados = malloc(sizeof(int)*capacidade);
  f->capacidade = capacidade;
  f->inicio = 0;
  f->fim = 0;
  f->nroelem = 0;
}
void insere(Fila *f, int elem){
  if(isFull(*f)==CHEIA){
    printf("Fila Cheia!\n");
    return;
  }else{
      f->dados[f->fim] = elem;
      f->nroelem++;
      if(f->fim==f->capacidade-1){
        f->fim = 0;
      }else{
        f->fim++;
      }
  }
  return;
}

int remover(Fila *f){
  int removido;
  if(isEmpty(*f)==VAZIA){
    printf("Fila vazia!\n");
    return -1;
  }else{
    removido = f->dados[f->inicio];
    if(f->inicio==f->capacidade-1){
      f->inicio = 0;
    }else{
      f->inicio++;
    }
  }
  return removido;
}
int isFull(Fila f){
  if(f.nroelem==f.capacidade){
    return CHEIA;
  }else{
    return 0;
  }
}

int isEmpty(Fila f){
  if(f.nroelem==0){
    return VAZIA;
  }else{
    return 0;
  }
}
int OlhaComeco(Fila f){
  return f.dados[f.inicio];
}
int OlhaFim(Fila f){
  return f.dados[f.fim];
}
void printaFila(Fila f){
  int i;
  printf("Capacidade: %d\n", f.capacidade);
  printf("Nro de elementos: %d\n", f.nroelem);
  printf("Inicio: %d\n", f.inicio);
  printf("Fim: %d\n", f.fim);
  if(f.inicio<f.fim){
    for(i=f.inicio;i<f.fim;i++){
      printf("Nro na posi %d: %d\n", i, f.dados[i]);
    }
  }else{
    for(i=f.inicio;i<f.capacidade;i++){
      printf("Nro na posi %d: %d\n", i, f.dados[i]);
    }
    for(i=0;i<f.fim;i++){
      printf("Nro na posi %d: %d\n", i, f.dados[i]);
    }
  }
  return;
}
void desaloca(Fila *f){
  free(f->dados);
  free(f);
  return;
}
