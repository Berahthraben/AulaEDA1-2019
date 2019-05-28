void esvazia_lista(Lista *l){
  void *aux1;
  void *aux2;
  int n = conta_elementos(Lista l);
  aux1 = l->lista;
  aux2 = aux1->prox;
  int i;
  for(i=0;i<n;i++){
    aux2 = aux1->prox;
    free(aux1->dados);
    free(aux1);
  }
}

int conta_elementos(Lista l){
  void *aux;
  aux = l->lista;
  int qtd = 0;
  while(aux->prox!=NULL){
    qtd++;
    aux = aux->prox;
  }
  return qtd;
}
