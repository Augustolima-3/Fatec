#include <stdio.h>
int main()
{
    float deposito, juros, rendimento, total_rendimento;

    printf("Faca seu deposito: ");
    scanf("%f%*c", &deposito);

    printf("\nDigite a taxa de juros: ");
    scanf("%f%*c", &juros);

    rendimento = deposito * (juros / 100);

    total_rendimento = deposito + rendimento;

    printf("\nSeu rendimento eh: %3.2f", rendimento);
    printf("\nSeu rendimento total eh: %3.2f", total_rendimento);

    getchar();
    return 0;
}
