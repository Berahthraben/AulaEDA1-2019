#ifndef COORDENADAS.H
#define COORDENADAS.H

typedef struct {
    int x;
    int y;
}Coordenadas;

void InicializaPlano(Coordenadas *cor, int x, int y);
float CalculaDistancia(Coordenadas cor1, Coordenadas cor2);
int RetornaX(Coordenadas cor);
int RetornaY(Coordenadas cor);
void PrintaCoordenadas(Coordenadas cor);

#endif
