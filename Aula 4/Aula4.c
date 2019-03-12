#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"

int main(void){
    Conta a;
    int saq;
    a.num = 123;
    a.saldo = 1000;
    printf("Digite a qtd a ser sacada!\n");
    scanf("%d", &saq);
    getchar();
    Saque(&a, saq);
    mostra_conta(&a);
    return 0;
}
