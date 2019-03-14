#include <stdio.h>
#include "Coordenadas.h"

int main(void){
    Coordenadas c1, c2;
    InicializaPlano(&c1, 10, 13);
    InicializaPlano(&c2, 23, 5);
    printf("Dist�ncia entre c1 e c2 �: %.2f\n", CalculaDistancia(c1, c2));
    printf("X retornado � %d\n", RetornaX(c1));
    printf("Y retornado � %d\n", RetornaY(c1));
    PrintaCoordenadas(c1);
    PrintaCoordenadas(c2);
    return 0;
}
