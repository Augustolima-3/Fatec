#include <stdio.h>
#include <locale.h>

int num, dobro = 0;

int funcaoDobro (int num) {
    dobro = num + num;
    printf("O dobro de %d é %d\n", num, dobro);
}

int main() {
setlocale(LC_ALL, "Portuguese");

printf("Informe um número: ");
scanf("%d", &num);

    funcaoDobro(num);

return 0;
}
