#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

void Inicializa_Lista(Lista *l, int tam_info){
  l->tam_info = tam_info;
  l->lista = null;
  l->qtd_elem = 0;
}

int InserirListaInicio(Lista *l, void *elemento);
  Elemento *temp = malloc(sizeof(Elemento));
  if(temp==null){
    return 0;
  }
  temp->info = malloc(sizeof(l->tam_info));
  if(temp->info==null){
    free(temp);
    return 0;
  }
  memcpy(temp->info, elemento, l->tam_info);
  temp->prox = l->lista;
  l->lista = temp;
  return 1;
}

int InserirListaFim(Lista *l, void *elemento){
  Elemento *temp = malloc(sizeof(Elemento));
  if(temp==null){
    return 0;
  }
  temp->info = malloc(sizeof(l->tam_info));
  if(temp->info==null){
    free(temp);
    return 0;
  }
  memcpy(temp->info, elemento, l->tam_info);
  temp->prox = null;
  Elemento *aux=l->lista;
  while(aux->prox!=null){
    aux = aux->prox;
  }
  aux->prox = temp;
  return 1;
}
void *RemoverListaFim(Lista *l, void *info){
  if(TestaVazia(l)==VAZIA){
    return VAZIA;
  }
  Elemento *aux = l->lista;
  while(aux->prox!=null){
    aux = aux->prox;
  }
  memcpy(info, aux->info, l->tam_info);
  free(aux->info);
  free(aux);
  return 1;
}

int RemoverListaInicio(Lista *l, void *info){
  if(TestaVazia(l)==VAZIA){
    return VAZIA;
  }
  Elemento *aux1 = l->lista;
  Elemento *aux2 = aux1->prox;
  memcpy(info, aux1->info, l->tam_info);
  free(aux1->info);
  free(aux1);
  l->lista = aux2;
  return 1;
}

int TestaVazia(Lista *l){
  if(l->lista==null){
    return VAZIA;
  }else{
    return 0;
  }
}
void *RetornaElemPosi(Lista *l, int posi){
  if(posi>l->qtd_elem){
    return null;
  }
  Elemento *aux = l->lista;
  int i;
  for(i=0;i<posi;i++){
    aux = aux->prox;
  }
  return aux->info;
}

int DesalocaLista(Lista *l){
  int i;
  for(i=0;i<l->qtd_elem;i++){
    void *temp;
    int temp = RemoverListaInicio(l, temp);
    if(temp==0){
      printf("ERRO AO DESALOCAR!\n");
      return 0;
    }
  }
  return 1;
/*  Elemento *aux1 = l->lista;
  Elemento *aux2 = l->lista->prox;
  int i;
  for(i=0;i<l->qtd_elem;i++){
    if(i%2==0){
      free(aux1->info);
      free(aux1);
      aux1 = aux2->prox;
    }else{
      free(aux2->info);
      free(aux2);
      aux2 = aux1->prox;
    }
  }
  free(l);
  return 1;
  */
}
void MostraLista(Lista *l, void (*mostra)(void *)){
  if(TestaVazia(l)==VAZIA){
    printf("Lista Vazia!\n");
    return;
  }else{
    printf("Dados da lista: \n");
    Elemento *aux = l->lista;
    while(aux!=null){
      mostra(aux->info);
      aux = aux->prox;
    }
  }
}
/*
void MostraFloat(void *x){
  float *p = x;
  printf(".1f ", *p);
}*/
