#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

int num, i, guardar, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        guardar++;
        soma += guardar;
        printf(" %d\n", i);
    }
    printf("Números dentro deste intervalo: %d\n", i-1);
    printf("Somatória dos valores: %d\n", soma);

return 0;
}
