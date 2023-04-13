#include <stdio.h>
#include <locale.h>

int soma_algarismos(int n) {
int fat = 1, soma = 0;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    while (fat > 0) {
        soma += fat % 10;
        fat /= 10;
    }
    return soma;
}

int main() {
setlocale(LC_ALL, "Portuguese");

int n;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    printf("A soma dos algarismos de %d! é %d.\n", n, soma_algarismos(n));
    return 0;
}
