#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include "Pilha.h"


int main(void){
    char entrada[10];
    printf("Digite a string a ser comparada: \n");
    scanf("%s", entrada);
    char *saida = malloc(sizeof(char)*strlen(entrada));
    Pilha p1;
    InicializaPilha(&p1, 10);
    int i;
    for(i=0;i<strlen(entrada);i++){
        Empilha(&p1, entrada[i]);
    }
    for(i=0;i<strlen(entrada);i++){
        saida[i] = OlhaTopo(p1);
        Desempilha(&p1);
    }
    printf("Invertida eh %s\n", saida);
    if(strcmp(entrada, saida)==1){
        printf("Não eh palindroma!\n");
    }else{
        printf("Eh palindroma!\n");
    }
    return 0;
}
// LEMBRAR DE MUDAR DECLARACOES DA PILHA PRA CHAR EM VEZ DE INT
//void Empilha(Pilha *p, char nro);
//E ALTERAR INICIALIZA PILHA:
// p->dados = malloc(sizeof(char)*c);
