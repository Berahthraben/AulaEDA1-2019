//Trabalho EDA Matriz.c

int Inicializa_MatrizEsp(MatrizEsp *m, int linha, int coluna, int tam_info){
  m->lin = linha;
  m->col = coluna;
  int i;
  Inicializa_Lista(&m->lis, sizeof(Lista));
  for(i=0;i<linha;i++){
    Lista temp2;
    Inicializa_Lista(&temp2, sizeof(EntradaMatriz));
    InserirListaFim(&m->lis, &temp2);
  }
  return 1;
}

int InsereValor(MatrizEsp *m, int linha, int coluna){
  
}
int RemoveValor(MatrizEsp *m, int linha, int coluna);
void MostraValorPosi(MatrizEsp *m, int linha, int coluna);
void MostraMatriz(MatrizEsp *m);
