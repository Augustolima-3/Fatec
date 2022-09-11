#include <stdio.h>
int main ()
{
    float salario, percentual_aumento, n_aumento, n_salario;
    printf("Digite seu salario: ");
    scanf("%f%*c", &salario);

    printf("\nDigite seu percentual de aumento: ");
    scanf("%f%*c", &percentual_aumento);

    n_aumento = salario * (percentual_aumento / 100);
    n_salario = salario + n_aumento;

    printf("\nO novo aumento eh: %3.2f", n_aumento);
    printf("\nO novo salario eh: %3.2f", n_salario);

    getchar();
    return 0;
}
