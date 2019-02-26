#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int nro, i, posi=0, neg=0;
    int *v = NULL;
    int *p = NULL;
    int *n = NULL;
    printf("Digite a quantidade de entradas\n");
    scanf("%d", &nro);
    getchar();
    v = realloc(v, sizeof(int)*nro);
    for(i=0;i<nro;i++){
        printf("Digite o valor na posi %d:\n", i);
        scanf("%d", &v[i]);
        getchar();
    }
    for(i=0;i<nro;i++){
        if(v[i]!=0){
            if(v[i]>0){
                posi++;
                p = realloc(p, sizeof(int)*posi);
                p[posi-1] = v[i];
            }else{
                neg++;
                n = realloc(n, sizeof(int)*neg);
                n[neg-1] = v[i];
            }
        }
    }
    printf("Printando os vetores...\n");
    printf("Vetor V\n");
    for(i=0;i<nro;i++){
        printf("%d ", v[i]);
    }
    printf("\nVetor N\n");
    for(i=0;i<neg;i++){
        printf("%d ", n[i]);
    }
    printf("\nVetor P\n");
    for(i=0;i<posi;i++){
        printf("%d ", p[i]);
    }
    return 0;
}
