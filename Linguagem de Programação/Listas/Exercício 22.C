#include <stdio.h>
#include <locale.h>

int somaAbaixoDiagonalPrincipal(int matriz[3][3]) {
int i, j, soma = 0;
    for (i = 1; i < 3; i++) {
        for (j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
setlocale(LC_ALL, "Portuguese");

int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int soma = somaAbaixoDiagonalPrincipal(matriz);

    printf("Soma dos elementos abaixo da diagonal principal: %d\n", soma);
    return 0;
}
