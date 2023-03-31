#include <stdio.h>
#include <string.h>
int main (){
    char string [50];
    int palavras = 1;
    int tam, i;

    printf("Insira uma string: ");
    gets(string);
    printf("\nTamanho do texto: %d", tam);

    for(int = 0; i < tam; i++){
        if(string[i]== ' '){
            palavras++;
        }
    }
    printf("\nO usuario digitou %d palavra(s)", palavras);

return 0;
}
