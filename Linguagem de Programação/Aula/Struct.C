#include <stdio.h>
#include <stdlib.h>

int main(){
    char texto[50];

    printf("Informe seu nome: ");
    scanf("%[^\n]", &texto);

    printf("nome: %s", texto);


return 0;
}
