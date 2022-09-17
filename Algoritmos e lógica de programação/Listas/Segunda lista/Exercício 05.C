#include <stdio.h>
int main ()
{
    float preco_fab, perc_imp, perc_dist, lucro_dist, valor_imp, preco_final;

    printf("Digite o preco de fabrica: ");
    scanf("%f%*c", &preco_fab);

    printf("Digite o percentual de imposto: ");
    scanf("%f%*c", &perc_imp);

    printf("Digite o percentual do distribuidor: ");
    scanf("%f%*c", &perc_dist);

    lucro_dist = preco_fab * perc_dist/100;
    valor_imp = preco_fab * perc_imp/100;
    preco_final = preco_fab + lucro_dist + valor_imp;

    printf("\nLucro do distribuidor: %3.2f", lucro_dist);
    printf("\nvalor do imposto: %3.2f", valor_imp);
    printf("\nPreco final: %3.2f", preco_final);

    getchar();
    return 0;
}
