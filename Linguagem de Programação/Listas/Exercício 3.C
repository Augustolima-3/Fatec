#include <stdio.h>
int paridade(int numero) {
    if (numero % 2 == 0) {
        return 0; // número é par
    } else {
        return 1; // número é ímpar
    }
}
int main() {
    int numeros[10];
    int pares = 0;
    int impares = 0;
    int i = 0;

    printf("Informe 10 numeros:\n");
    while (i < 10) {
        scanf("%d", &numeros[i]);
        if (paridade(numeros[i]) == 0) {
            pares++;
        } else {
            impares++;
        }
        i++;
    }
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    return 0;
}
