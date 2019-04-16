#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fila.h"
int main(void){
  Fila f;
  Inicializa_Fila(&f, 20, 4);
  int i;
  srand(time(NULL));
  for(i=0;i<20;i++){
    InsereInicio(&f, rand()%10);
  }
  MostraFila(f);
  int temp;
  temp = RemoveFim(&f);
  printf("Removido nro: %d\n", temp);
  MostraFila(f);
  temp = RemoveInicio(&f);
  printf("Removido nro: %d\n", temp);
  MostraFila(f);
  return 0;
}
