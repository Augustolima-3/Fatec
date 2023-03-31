#include <stdio.h>
#include <string.h>
int main (){
    int i, tam;
    char nome [10];
    char letra [i];


    printf("\nInforme o texto: ");
    gets(nome);

    printf("\nInforme a letra trocada: ");
    scanf("%c", letra);

    tam = strlen(nome);
    printf("\nTamanho da string: %d", tam);

    for(i = 0; i < tam; i++){
        if(nome [i]==letra[0])
            printf("\n%c", '-');
        else
            printf("\n%c", nome[i]);
    }

return 0;
}
