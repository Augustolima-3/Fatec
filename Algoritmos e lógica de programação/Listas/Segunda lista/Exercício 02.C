#include <stdio.h>
#include <math.h>

int main ()
{
    float n1, n2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f%*c", &n2);

    resultado = pow(n1,n2);

    printf("\nO resultado eh: %3.2f", resultado);

    getchar ();
    return 0;
}
