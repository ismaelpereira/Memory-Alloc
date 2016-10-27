#include <stdio.h>
#include <stdlib.h>

int aloca(int n){
	int p;
    p=(int*)malloc(n * sizeof(int));
	return p;
}

int realoca(int novo){
    int p1;
    p1=(int*) malloc(novo * sizeof(int));
	return p1;
}

int main(){
    int n,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int *vet=aloca(n);
	for(i=0;i<n;i++){
		printf("Digite um numero: ");
		scanf("%d",&vet[i]);
	}

	int novo;
	printf("Digite o novo tamanho do vetor :");
	scanf("%d",&novo);
    int *vet1=realoca(novo);
	for(i=0;i<n;i++){
        vet1[i]=vet[i];
	}

	for(i=0;i<novo;i++){
        if(vet1[i]==vet[i]){
            printf("%d\n",vet1[i]);
        }
	}
	return 0;
}

