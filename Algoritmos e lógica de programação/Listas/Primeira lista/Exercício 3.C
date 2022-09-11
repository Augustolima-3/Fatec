#include <stdio.h>
int main ()
{
    float n1, n2, n3, p1, p2, p3, media_ponderada;
    printf("Digite sua primeira nota: ");
    scanf("%f%*c", &n1);

    printf("\nDigite sua segunda nota: ");
    scanf("%f%*c", &n2);

    printf("\nDigite sua terceira nota: ");
    scanf("%f%*c", &n3);

    p1 = 7;
    p2 = 7;
    p3 = 7;

    media_ponderada = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);

    printf("Sua media ponderada eh: %3.2f", media_ponderada);

    getchar();
    return 0;
}
