#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>


Pilha *InicializaPilha(Pilha *p, int c){
    p->topo = -1;
    p->dados = malloc(sizeof(int)*c);
    p->capacidade = c;
    return p;
}

int TestaCheia(Pilha *p){
    if(p->topo < p->capacidade){
        return 0;
    }else{
        return CHEIA;
    }
}

int TestaVazia(Pilha *p){
    if(p->topo == -1){
        return VAZIA;
    }else{
        return 0;
    }
}
void Empilha(Pilha *p, int nro){
    if(TestaCheia(p)==CHEIA){
        printf("Pilha cheia!\n");
        return;
    }else{
        p->dados[p->topo + 1] = nro;
        p->topo++;
        printf("Empilhada com sucesso!\n");
    }
}

void Desempilha(Pilha *p){
    if(TestaVazia(p)==VAZIA){
        printf("Pilha vazia!\n");
        return;
    }else{
        p->topo--;
        printf("Desempilhada com sucesso!\n");
    }
}

int OlhaTopo(Pilha p){
    return p.topo;
}
void MostraPilha(Pilha p){
    int i;
    printf("Capacidade: %d\n", p.capacidade);
    printf("Topo esta em: %d\n", p.topo);
    for(i=0;i<p.topo+1;i++){
        printf("Numero na posi %d: %d\n", i, p.dados[i]);
    }
}
