#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

int main(void){
    char entrada[30];
    printf("Digite o bagui a ser analisado: \n");
    gets(entrada);
    printf("%s", entrada);
    Pilha p1;
    InicializaPilha(&p1, 20);
    int i;
    for(i=0;i<strlen(entrada);i++){
        if(entrada[i]=='('){
            Empilha(&p1, entrada[i]);
        }else if(entrada[i]==')'){
            if(TestaVazia(&p1)==-2){
                printf("Fecha parenteses sem abre parenteses na posi %d\n", i);
                return 0;
            }else{
                Desempilha(&p1);
            }
        }
    }
    MostraPilha(p1);
    if(TestaVazia(&p1)!=VAZIA){
        printf("Ha parenteses abertos que nao foram fechados\n");
    }else{
        printf("Expressao ok!\n");
    }
    return 0;
}
// MESMA COISA DA ANTERIOR. ALTERAR PILHA PARA USAR CHAR
