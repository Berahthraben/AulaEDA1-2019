#include <stdio.h>
#include <stdlib.h>

int main(void){
    float notas=0;
    int contagem=1, i;
    float maior=0, menor=10, media=0;
    float *p=malloc(sizeof(float));
    printf("Digite as notas. -1 Para terminar.\n");
    while(notas!=-1){
        scanf("%f", &notas);
        getchar();
        if(notas!=-1){
            p=realloc(p, sizeof(float)*contagem);
            p[contagem-1]=notas;
            contagem++;
        }
    }
    contagem--;
    menor = p[0];
    maior = p[0];
    for(i=0;i<contagem;i++){
        printf("Posi %d, %f\n",i, p[i]);
        if(p[i]>maior){
            maior = p[i];
        }
        if(p[i]<menor){
            menor = p[i];
        }
        media = media+p[i];
    }
    media = media/contagem;
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media: %.2f\n", media);
    return 0;
}
