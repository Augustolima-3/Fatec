#include <stdio.h>
int main ()
{
    float salario, aumento, novo_salario;
    printf("Digite seu salario: ");
    scanf("%f%*c", &salario);

    aumento = 0.25 * salario;
    novo_salario = salario + aumento;

    printf("\nSeu novo salario eh: %3.2f", novo_salario);

    getchar();
    return 0;
}
