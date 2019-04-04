#define max_size 100
#define VAZIA -1
#define CHEIA -2

typedef struct Fila{
  int *dados;
  int capacidade;
  int inicio;
  int fim;
  int nroelem;
}Fila;

void Inicializa_fila(Fila *f, int capacidade);
void insere(Fila *f, int elem);
int remover(Fila *f);
int isFull(Fila f);
int isEmpty(Fila f);
int OlhaComeco(Fila f);
int OlhaFim(Fila f);
void printaFila(Fila f);
void desaloca(Fila *f);
