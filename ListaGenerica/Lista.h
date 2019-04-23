#include <stdio.h>
#include <stdlib.h>
#define VAZIA -1

typedef struct Elemento {
  void *info;
  struct Elemento *prox;
} Elemento;

typedef struct{
  int qtd_elem;
  int tam_info;
  Elemento *lista;
} Lista;

void Inicializa_Lista(Lista *l, int tam_info);
int InserirListaInicio(Lista *l, int elemento);
int RemoverLista(Lista *l);
int MostraElemPosi(Lista *l);
int TestaVazia(Lista *l);
void DesalocaLista(Lista *l);
