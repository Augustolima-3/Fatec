#include <stdio.h>
int main ()
{
    float salario_base, gratificacao, imposto, salario_receber;

    printf("Digite seu salario: ");
    scanf("%f%*c", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;

    salario_receber = salario_base + gratificacao - imposto;

    printf("\nO salario a receber eh: %3.2f", salario_receber);

    getchar();
    return 0;
}
