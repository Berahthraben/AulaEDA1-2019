#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Matriz.h"

int Inicializa_MatrizEsp(MatrizEsp *m, int linha, int coluna){
  m->lin = linha;
  m->col = coluna;
  int i;
  Inicializa_Lista(&m->lis, sizeof(Lista));
  for(i=0;i<linha;i++){
    Lista temp2;
    Inicializa_Lista(&temp2, sizeof(EntradaMatriz));
    if(i!=0){
        InserirListaFim(&m->lis, &temp2);
    }else{
        InserirListaInicio(&m->lis, &temp2);
    }
  }
  return 1;
}

int InsereValor(MatrizEsp *m, int linha, int coluna, void *entrada){
  Lista *aux;
  aux = (Elemento *)(m->lis.lista); //apontando para linha correta, pra fazer a operacao na mesma
  int i;
  for(i=1;i<linha;i++){
	  aux = ((Elemento *)aux)->prox;
  }
  aux = ((Lista *)((Elemento *)aux)->info); // Aux agora aponta pra lista da Line "linha"
  if(EncontraColuna(aux, coluna) != -1){ // se há uma coluna já existente, substui o valor.
	  return EditaValor(m, linha, coluna, entrada);
  }
  if(TestaVazia(aux)==-1){ //se a lista estiver vazia, insere no inicio
	  return InserirListaInicio(aux, entrada);
  }
  int posi = EncontraListaPosi(aux, coluna); //encontra a posição da coluna a ser inserida (ordenação)
  return InserirListaInd(aux, entrada, posi); //insere na coluna correta (ordem)
}
int EditaValor(MatrizEsp *m, int linha, int coluna, void *entrada){
	//Testes para casos especificos
	if(linha <= 0 || coluna <=0){
	  printf("Linha &| Coluna não pode ser 0 ou negativa!\n");
	  return -1;
	}
	if(((EntradaMatriz *)entrada)->valor==0){ //se valor da entrada for 0, remove.
	  return RemoveValor(m, linha, coluna);
	}
	if(linha > m->lin){ //se linha a ser inserida for maior que nro de linhas da matriz, aloca novas listas e altera o valor.
	  int i;
	  for(i=m->lin;i<linha;i++){
		  Lista temp;
		  Inicializa_Lista(&temp, sizeof(EntradaMatriz));
		  InserirListaFim(&m->lis, &temp);
	  }
	  m->lin = linha;
	}
	if(coluna > m->col){ //apenas altera o valor máximo das colunas, caso necessário
	  m->col = coluna;
	}
	//apontar para a linha a ser resolvida
	Elemento *aux;
    aux = m->lis.lista; //apontando para linha correta, pra fazer a operacao na mesma
    int i;
    for(i=1;i<linha;i++){
        aux = aux->prox;
    }
    // Aux agora aponta pra lista da Line "linha"
	//adicionar o valor
	int teste = EncontraColuna(aux->info, coluna);
	if(teste==-1){ //testa se o valor na coluna existe na lista
		if(TestaVazia(aux->info)==VAZIA){ //se lista estiver vazia, insere no inicio
			return InserirListaInicio(aux->info, entrada);
		}else{ //senao, insere na posi certa
			int posi = EncontraListaPosi(aux->info, coluna);
			return InserirListaInd(aux->info, entrada, posi);
		}
	}
	//modificar o valor
	return InserirListaInd(aux, teste, entrada);
}


int RemoveValor(MatrizEsp *m, int linha, int coluna){
	Lista *aux;
    aux = (Elemento *)(m->lis.lista); //apontando para linha correta, pra fazer a operacao na mesma
    int i;
    for(i=1;i<linha;i++){
        aux = ((Elemento *)aux)->prox;
    }
    aux = ((Lista *)((Elemento *)aux)->info); // Aux agora aponta pra lista da Line "linha"
	return RemoverListaInd(aux, NULL, coluna-1);
}
int EncontraColuna(Lista *l, int coluna){ //Comp. se a coluna já existe, retorna a posi na lista se sim, -1 se não
	/*Elemento *aux = m->lis->lista;
	int i;
	for(i=1;i<linha;i++){
		aux = aux->prox;
	}*/
	int i, cont=0;
	Elemento *aux;
	aux = l->lista;
	while(aux!=NULL){
        EntradaMatriz *temp;
        temp = (EntradaMatriz *)(aux->info);
        if(temp->coluna==coluna){
            return cont;
        }
        cont++;
        aux = aux->prox;
	}
	return -1;
}

int EncontraListaPosi(Lista *l, int coluna){
	int i;
	Elemento *aux1 = l->lista;
	EntradaMatriz *aux2;
	for(i=0;i<l->qtd_elem;i++){
		aux2 = aux1->info;
		if(aux2->coluna > coluna){
			return i;
		}
	}
	return i;
}
void MostraValorPosi(MatrizEsp *m, int linha, int coluna){
    if(linha > m->lin){
        printf("Erro! Primeiro insira o elemento antes de mostrá-lo\n");
        return;
    }
	Elemento *aux;
    aux = m->lis.lista; //apontando para linha correta, pra fazer a operacao na mesma
    int i;
    for(i=1;i<linha;i++){
        aux = aux->prox;
    }
    // Aux agora aponta pra lista da Line "linha"
    int temp = EncontraColuna(aux->info, coluna);
	if(temp==-1){
        printf("Erro! Primeiro insira o elemento antes de mostra-lo\n");
        return;
	}
	EntradaMatriz *p = RetornaElemPosi(aux->info, temp);
	printf("%d", p->valor);
}
void MostraMatriz(MatrizEsp *m){
	int i, j;
	Elemento *aux;
	aux = m->lis.lista;
	for(i = 0; i<m->lin ; i++){
        Lista *aux2;
        aux2 = aux->info;
        if(TestaVazia(aux2)==VAZIA){
            for(j=0;j<m->col;j++){
                printf(" 0");
            }
        }else{
            Elemento *aux3;
            aux3 = aux2->lista;
            for(j = 0; j<m->col; j++){
                EntradaMatriz *temp;
                if(aux3 != NULL){
                    temp = aux3->info;
                    if(temp->coluna-1 == j){
                        printf(" %d", temp->valor);
                        aux3 = aux3->prox;
                    }else{
                        printf(" 0");
                    }
                }else{
                    printf(" 0");
                }
            }
        }
		printf("\n");
		aux = aux->prox;
	}
	printf("\n");
}
void DesalocaMatriz(MatrizEsp *m){
    Elemento *Aux1;
    Aux1 = m->lis.lista;
    int i;
    for(i=0;i<m->lin;i++){
        DesalocaLista((Lista *)(Aux1->info));
        Aux1 = Aux1->prox;
    }
    DesalocaLista(m->lis.lista);
    free(m);
}
