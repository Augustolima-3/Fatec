#include <stdio.h>
#include <locale.h>

int soma_acima_diagonal_principal(int matriz[3][3]) {
int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
setlocale(LC_ALL, "Portuguese");

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma = soma_acima_diagonal_principal(matriz);

    printf("A soma dos elementos acima da diagonal principal é %d\n", soma);
    return 0;
}
