#ifndef STRUCT.H
#define STRUCT.H
#endif // struct


typedef struct Conta{
    int num;
    float saldo;
} Conta;

void mostra_conta(Conta *c){
    printf("Nro: %d", c->num);
    printf("Saldo: %.2f", c->saldo);
}

void Inicializa_conta(Conta *p, int n, float s){
    p->num = n;
    p->saldo = s;
}
void Saque(Conta *a, float valor){
    if(valor>a->saldo){
        printf("Saque maior que saldo!\n");
        return;
    }else{
        a->saldo = a->saldo-valor;
        return;
    }
}
