#include <stdio.h>
int main ()
{
    float n1, n2, n3, media;
    printf("Digite sua primeira nota: ");
    scanf("%f%*c", &n1);

    printf("\nDigite sua segunda nota: ");
    scanf("%f%*c", &n2);

    printf("\nDigite sua terceira nota: ");
    scanf("%f%*c", &n3);

    media = (n1 + n2 + n3)/3;

    printf("Sua media eh: %3.2f", media);

    getchar();
    return 0;
}
