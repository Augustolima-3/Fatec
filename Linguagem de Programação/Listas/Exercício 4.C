#include <stdio.h>

int main()
{
    int numero;
    int i;
    while (1)
        {
        printf("Digite um numero inteiro e positivo (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        }

        int primo = 1;
        for (i = 2; i < numero; i++)
        {
            if (numero % i == 0)
            {
                primo = 0;
                break;
            }
        }
        if (primo == 1)
        {
            printf("%d eh primo.\n", numero);
        } else
        {
            printf("%d nao eh primo.\n", numero);
        }
    }
    return 0;
}
