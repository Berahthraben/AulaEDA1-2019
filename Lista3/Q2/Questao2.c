#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"
#include <math.h>

int main(void){
    int entrada;
    double saida = 0;
    Pilha p1;
    InicializaPilha(&p1, 32);
    printf("Digite o numero a ser convertido: \n");
    scanf("%d", &entrada);
    getchar();
    int i=0;
    int resto;
    while(entrada>0){
        resto = entrada%2;
        Empilha(&p1, resto);
        entrada = entrada/2;
        i++;
    }
    for(i=i;i>0;i--){
        printf("%d", OlhaTopo(p1));
        saida = saida + (OlhaTopo(p1)*pow(10, i));
        Desempilha(&p1);
    }
    printf("\n");
    printf("Saida: %.0f\n", saida);
    Desaloca_pilha(&p1);
    return 0;
}
// USANDO A PILHA DE PilhaEXSlide
