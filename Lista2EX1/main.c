#include <stdio.h>
#include "Coordenadas.h"

int main(void){
    Coordenadas c1, c2;
    InicializaPlano(&c1, 10, 13);
    InicializaPlano(&c2, 23, 5);
    printf("Distância entre c1 e c2 é: %.2f\n", CalculaDistancia(c1, c2));
    printf("X retornado é %d\n", RetornaX(c1));
    printf("Y retornado é %d\n", RetornaY(c1));
    PrintaCoordenadas(c1);
    PrintaCoordenadas(c2);
    return 0;
}
