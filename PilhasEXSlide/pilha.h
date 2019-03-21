#define MAX_SIZE 100
#define CHEIA -1
#define VAZIA -2

typedef struct {
    int *dados;
    int topo, capacidade;
}Pilha;

Pilha *InicializaPilha(Pilha *p, int c);
int TestaCheia(Pilha *p);
int TestaVazia(Pilha *p);
void Empilha(Pilha *p, int nro);
void Desempilha(Pilha *p);
int OlhaTopo(Pilha p);
void MostraPilha(Pilha p);
