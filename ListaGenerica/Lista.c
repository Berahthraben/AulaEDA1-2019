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
  if(novo->info==null){
    free(novo);
    return 0;
  }
  memcpy(temp->info, elemento, l->tam_info);
  temp->prox = l->lista;
  l->lista = temp;
  void *aux=l->lista;
  while(aux->prox!=null){
    aux = aux->prox;
  }
    return 1;
  }
int RemoverLista(Lista *l);

int TestaVazia(Lista *l){
  if(l->lista==null){
    return VAZIA;
  }else{
    return 0;
  }
}
int MostraElemPosi(Lista *l);

void DesalocaLista(Lista *l);
