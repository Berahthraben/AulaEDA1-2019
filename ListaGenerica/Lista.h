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
int RemoverListaInicio(Lista *l, void *info);
int InserirListaFim(Lista *l, int elemento);
int RemoverListaFim(Lista *l, void *info);
int MostraElemPosi(Lista *l, int posi);
int TestaVazia(Lista *l);
int DesalocaLista(Lista *l);
void MostraLista(Lista *l, void (*mostra)(void *));
