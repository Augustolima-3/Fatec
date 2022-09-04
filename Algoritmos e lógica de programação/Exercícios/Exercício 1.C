#include<stdio.h>
    int main ()
{
    int n1,n2,n3,n4,soma;
    printf("Digite o primeiro valor: ");
    scanf("%d%*c", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d%*c", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d%*c", &n3);
    printf("Digite o quarto valor: ");
    scanf("%d%*c", &n4);
    soma = n1+n2+n3+n4;
    printf("A soma dos numeros eh: %d", soma);
    getchar();
    return 0;

}
