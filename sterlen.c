#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int sterlen (char *palavra){
    int i=0;
    while(palavra[i]!='\0'){
        i++;
    }
    return i;
}

int main(){
    int resultado;
    char *palavra = (char *)malloc(MAX * sizeof(char));
    printf("Digite sua palavra: ");
    scanf("%10s",palavra);
    resultado = sterlen(palavra);
    printf("%d\n",resultado);
    return 0;
}
