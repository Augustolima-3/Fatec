#include <stdio.h>
#include <locale.h>

int i, n1, n2, guardar_num = 0, soma = 0;

int somarNumeros(int n1, int n2) {
    printf("Números que estão dentro desse intervalo:\n");
    for (i = n1; i < n2-1; i) {
        guardar_num = i++;
        soma += guardar_num+1;
        printf(" %d |", guardar_num+1);
    }
    for (i = n2; i < n1-1; i++) {
        guardar_num = i;
        soma += guardar_num+1;
        printf(" %d |", guardar_num+1);
    }
printf("\nA soma dos valores é: %d\n", soma);
}

int main() {
setlocale(LC_ALL, "Portuguese");

int n1, n2;

    printf("Informe o primeiro número: ");
    scanf("%d", &n1);

    printf("Informe o segundo número: ");
    scanf("%d", &n2);

    printf("\n");
    somarNumeros(n1, n2);

    return 0;
}
