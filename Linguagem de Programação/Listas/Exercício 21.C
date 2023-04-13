#include <stdio.h>
#include <locale.h>

int soma_diagonal_principal(int matriz[3][3]) {
int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

int main() {
setlocale(LC_ALL, "Portuguese");

int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int soma = soma_diagonal_principal(matriz);

    printf("Soma dos elementos da diagonal principal é: %d\n", soma);
    return 0;
}
