#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main(void) {
  Fila f;
  Inicializa_fila(&f, 5);
  insere(&f, 10);
  printaFila(f);
  insere(&f, 15);
  printaFila(f);
  insere(&f, 20);
  printaFila(f);
  remover(&f);
  printaFila(f);
  return 0;
}
