#include <stdio.h>
int main ()
{
    float salario_base, imposto, salario_receber;

    printf("Digite seu salario: ");
    scanf("%f%*c", &salario_base);

    imposto = salario_base * 0.10;

    salario_receber = salario_base + 50 - imposto;

    printf("\nO salario a receber eh: %3.2f", salario_receber);

    getchar();
    return 0;
}
