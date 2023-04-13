#include <stdio.h>
int calculo(int numeros[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += numeros[i];
    }
    return total;
}
float calcularMedia(int numeros[], int n)
{
    int total = calculo(numeros, n);
    float media = (float)total / n;
    return media;
}

int encontrarMaior(int numeros[], int n)
{
    int maior = numeros[0];
    for (int i = 1; i < n; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    return maior;
}
int encontrarMenor(int numeros[], int n)
{
    int menor = numeros[0];
    for (int i = 1; i < n; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }
    return menor;
}
int main()
{
    int n, numeros[100];
    printf("Informe a quantidade de numeros: ");
    scanf("%d", &n);
    printf("Informe os numeros:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    int total = calculo(numeros, n);
    float media = calcularMedia(numeros, n);
    int maior = encontrarMaior(numeros, n);
    int menor = encontrarMenor(numeros, n);

    printf("\nResumo da entrada do usuario:\n");
    printf("Total: %d\n", total);
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
