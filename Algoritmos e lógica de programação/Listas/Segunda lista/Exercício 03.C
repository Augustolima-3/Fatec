#include <stdio.h>
int main ()
{
    float pes, polegadas, jardas, milhas;

    printf("Digite a medida em pes: ");
    scanf("%f%*c", &pes);

    polegadas = pes * 12;
    printf("\nO resultado em polegadas eh: %3.2f", polegadas);

    jardas = pes / 3;
    printf("\nO resultado em jardas eh: %3.2f", jardas);

    milhas = pes * 5280;
    printf("\nO resultado em milhas eh: %3.2f", milhas);

    getchar();
    return 0;
}
