#include <stdio.h>
#include <locale.h>

int somaDiagonalSecundaria(int matriz[3][3]) {
int soma = 0;
int i, j;

    for (i = 0, j = 2; i < 3; i++, j--) {
        soma += matriz[i][j];
    }

    return soma;
}

int main() {
setlocale(LC_ALL, "Portuguese");

int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int soma = somaDiagonalSecundaria(matriz);

    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);

    return 0;
}
