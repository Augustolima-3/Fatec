include <stdio.h>

int main()
{
    float area, raio;

    printf("Digite o raio do circulo em cm: ");
    scanf("%f%*c", &raio);

    area = 3.14 * (raio * raio);

    printf("\nA area do circulo eh: %3.2f cm", area);

    getchar();
    return 0;
}
