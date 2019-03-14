#ifndef MATRIZES.h
#define MATRIZES.h
typedef struct {
    int **elementos;
    int linhas;
    int colunas;
}Matriz;

void InicializaMatriz(Matriz *m, int linhas, int colunas);
void ModificaValor(Matriz *m, int linha, int coluna, int valor);
int LeMatriz(Matriz m, int linha, int coluna);
int ComparaMatriz(Matriz m1, Matriz m2);
Matriz SomaMatriz(Matriz m1, Matriz m2);
Matriz MultiplicaMatriz(Matriz m1, Matriz m2);
void MostraMatriz(Matriz m);
#endif // MATRIZES
