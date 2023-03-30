#include <stdio.h>
#include <string.h>
int main (){
    char nome [10];
    int i, tam;

    printf("\nInforme o texto: ");
    gets(nome);

    tam = strlen(nome);
    printf("%d", tam);

    for(i = tam; i >= 0; i--) //decremento
    printf("%c", nome [i]);

return 0;
}
