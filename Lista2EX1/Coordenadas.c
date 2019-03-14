#include <stdio.h>
#include <math.h>
#include "Coordenadas.h"

void InicializaPlano(Coordenadas *cor, int x, int y){
    cor->x = x;
    cor->y = y;
}
float CalculaDistancia(Coordenadas cor1, Coordenadas cor2){
    float distancia;
    distancia = sqrt(pow(cor1.x - cor2.x, 2) + pow(cor1.y - cor2.y, 2));
    return distancia;
}
int RetornaX(Coordenadas cor){
    return cor.x;
}
int RetornaY(Coordenadas cor){
    return cor.y;
}
void PrintaCoordenadas(Coordenadas cor){
    printf("X: %d | Y: %d\n", cor.x, cor.y);
}
