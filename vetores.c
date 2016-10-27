#include <stdio.h>
#include <stdlib.h>

int aloca1(int tamanho1){
    int *p;
    p=(int*)malloc(tamanho1 * sizeof(int));
    return p;
}

int aloca2(int tamanho2){
    int *p1;
    p1=(int*) malloc(tamanho2 * sizeof(int));
    return p1;
}

int aloca3(int tamanho1,int tamanho2){
    int *total;
    total=(int*) malloc((tamanho1+tamanho2)*sizeof(int));
    return total;
}

int main()
{
    int tamanho1,tamanho2;
    int i,j=0,x=0;

    printf("Digite o tamanho da primeira lista: ");
    scanf("%d",&tamanho1);
    int *lista1=aloca1(tamanho1);
    for(i=0;i<tamanho1;i++){
        printf("Digite um numero: ");
        scanf("%d",&lista1[i]);
    }

    printf("Digite o tamanho da segunda lista: ");
    scanf("%d",&tamanho2);
    int *lista2=aloca2(tamanho2);
    for(i=0;i<tamanho2;i++){
        printf("Digite um numero: ");
        scanf("%d",&lista2[i]);
    }
    int *lista3=aloca3(tamanho1,tamanho2);
    for(i=0;i<(tamanho1+tamanho2);i++){
        if(i%2==0){
            lista3[i]=lista1[x];
            x++;
        }
        else{
            lista3[i]=lista2[j];
            j++;
        }
    }

    for(i=0;i<(tamanho1+tamanho2);i++){
        printf("%d\n",lista3[i]);
        }
    return 0;
}
