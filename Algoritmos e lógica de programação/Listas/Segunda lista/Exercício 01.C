#include <stdio.h>
#include <math.h>
int main()
{
    double raiz_quadrada, raiz_cubica, numero, quadrado, cubo;
    printf("Digite um numero positivo e maior que zero: ");
    scanf("%lf%*c", &numero);

    quadrado = numero * numero;
    printf("\nO resultado eh: %3.2lf", quadrado);

    cubo = numero * numero * numero;
    printf("\nO resultado eh: %3.2lf", cubo);

    raiz_quadrada = sqrt (numero);
    printf("\nO resultado eh: %3.2lf", raiz_quadrada);

    raiz_cubica = pow(numero,1.0/3.0);
    printf("\nO resultado eh: %3.2lf", raiz_cubica);

    getchar();
    return 0;
}
