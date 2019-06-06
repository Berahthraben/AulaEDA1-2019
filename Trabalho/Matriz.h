#include "Lista.h"

typedef struct{
  int coluna;
  float valor;
}EntradaMatriz;

typedef struct{
  int lin, col;
  Lista lis;
}MatrizEsp;

int Inicializa_MatrizEsp(MatrizEsp *m, int linha, int coluna, int tam_info);
int InsereValor(MatrizEsp *m, int linha, int coluna);
int RemoveValor(MatrizEsp *m, int linha, int coluna);
void MostraValorPosi(MatrizEsp *m, int linha, int coluna);
void MostraMatriz(MatrizEsp *m);
