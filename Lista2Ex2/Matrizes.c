#include <stdio.h>
#include "Matrizes.h"

void InicializaMatriz(Matriz *m, int linhas, int colunas){
    int i, j;
    m->elementos = malloc(sizeof(int *)*linhas);
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            m->elementos[i][j] = 0;
        }
    }
    m->linhas = linhas;
    m->colunas = colunas;
}
void DestroiMatriz(Matriz *m){
    
}
void ModificaValor(Matriz *m, int linha, int coluna, int valor){
    if(linha > m->linhas || coluna > m->colunas){
        printf("Impossivel modificar no local!\n");
        return;
    }else{
        m->elementos[linha][coluna] = valor;
        Printf("Valor modificado com sucesso!\n");
    }
}
int LeMatriz(Matriz m, int linha, int coluna){
    if(linha > m->linhas || coluna > m->colunas){
        printf("Impossivel ler no local!\n");
        return;
    }else{
        return m->elementos[i][j];
    }
}
int ComparaMatriz(Matriz m1, Matriz m2){
    int i, j;
    if(m1->linhas != m2->linhas || m1->colunas != m2->colunas){
        return 0;
    }else{
        for(i=0;i<m1->linhas;i++){
            for(j=0;j<m2->colunas;j++){
                if(m2->elementos[i][j] != m1->elementos[i][j]){
                    return 0;
                }
            }
        }
    }
    return 1;
}
Matriz SomaMatriz(Matriz m1, Matriz m2){
    int i, j;
    if(m1->linhas != m2->linhas || m1->colunas != m2->colunas){
        printf("Impossivel somar!");
        return;
    }
    Matriz temp;
    InicializaMatriz(&temp, m1->linhas, m1->colunas);
    for(i=0;i<m1->linhas;i++){
        for(j=0;j<m1->colunas;j++){
            temp.elementos[i][j] = m1->elementos[i][j] + m2->elementos[i][j];
        }
    }
    return temp;
}
Matriz MultiplicaMatriz(Matriz m1, Matriz m2){
    int i, j, k, aux = 0, somaatual=0;
    if(m1->colunas != m2->linhas){
        Printf("Impossivel multiplicar!\n");
        return;
    }
    Matriz temp;
    InicializaMatriz(&temp, m1->linhas, m2->colunas);
    for(i=0;i<m1->linhas;i++){
        for(j=0;j<m2->colunas;j++){
            for(k=0;k<m1->linhas;k++){
                somaatual = somaatual + m1->elementos[i][k] * m2->elementos[k][j];
            }
            temp->elementos[i][j] = somaatual;
            soma = 0;
        }
    }
}
