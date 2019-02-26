#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int n, cont=0, i;
    int *v = NULL;
    printf("Digite o nro de entradas\n");
    scanf("%d", &n);
    getchar();
    v = realloc(v, sizeof(int)*n);
    for(i=0;i<n;i++){
        printf("Digite o nro na posi %d\n", i);
        scanf("%d", &v[i]);
        getchar();
    }
    for(i=0;i<n;i++){
        if(v[i]>0){
            cont++;
        }
    }
    printf("A qtd de positivos eh %d\n", cont);
    return 0;
}
