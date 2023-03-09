#include <stdio.h>
int dobro(int x){
    return 2*x;
}

int main(){
    int numero, resultado;
    printf("Exercicio funcao - dobro");
    printf("Informe um numero: ");
    scanf("%d", &numero);
    resultado = dobro(numero);
    printf("\nDobro de %d = %d", numero, resultado);
return 0;
}
