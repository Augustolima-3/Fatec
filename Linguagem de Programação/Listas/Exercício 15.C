#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");

int num, i, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        fatorial*= i;
    }
    printf("%d! é: %d\n", num, fatorial);
return 0;
}
