#include <stdio.h>
#include <stdlib.h>
#define CHEIA -1
#define VAZIA -2

typedef struct{
  int *dados;
  int fim;
  int inicio;
  int nroelem;
  int capacidade;
  int tam_info;
}Fila;

void Inicializa_Fila(Fila *f, int size, int taminfo);
void InsereInicio(Fila *f, int nro);
int RemoveInicio(Fila *f);
void InsereFim(Fila *f, int nro);
int RemoveFim(Fila *f);
void FreeFila(Fila *f);
int TestaVazia(Fila f);
int TestaCheia(Fila f);
void MostraFila(Fila f);
