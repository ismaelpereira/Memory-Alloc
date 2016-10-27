#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int strlen (char *palavra){
    int i=0;
    while(palavra[i]!='\0'){
        i++;
    }
    return i;
}

char* strconcat(char *palavra1,char *palavra2){
    char *palavra3 = (char *)malloc(strlen(palavra1)+strlen(palavra2) * sizeof(char));
    int i, x = 0, j = 0;
    for(i=0; i<strlen(palavra2); i++){
        if(x == 0){
            for(j=0; j<strlen(palavra1); j++){

                palavra3[x] = palavra1[j];
                x++;
            }
        }

        palavra3[x] = palavra2[i];
        x++;

    }
    return palavra3;

}

int main(){
    int resultado;
    char *palavra = (char *)malloc(MAX * sizeof(char));
    char *palavra2 = (char *)malloc(MAX * sizeof(char));
    char *palavra3;
    int i = 0;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    printf("Digite outra palavra: ");
    scanf("%s",palavra2);

    palavra3 = strconcat(palavra,palavra2);
    resultado = strlen(palavra3);
    printf("%.*s \n",resultado -1, palavra3);

    return 0;
}
