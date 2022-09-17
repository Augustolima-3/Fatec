#include <stdio.h>
int main ()
{
    int ano_nas, ano_atual, idade, futuro;

    printf("Digite seu ano de nascimento: ");
    scanf("%d%*c", &ano_nas);

    printf("\nDigite o ano_atual: ");
    scanf("%d%*c", &ano_atual);

    idade = ano_atual - ano_nas;
    futuro = 2050 - ano_nas;

    printf("\nSua idade eh: %d\nSua idade no futuro eh:%d ",idade, futuro);

    getchar();
    return 0;
}
