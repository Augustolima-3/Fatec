#include <stdio.h>
void printTable(int userNumber)
{
    int count = 0;
    while(count < 11)
    {
        printf("\n%i x %i = %i\n",userNumber, count, userNumber * count);
        count++;
    }
}
int main()
{
    int userNumber = 0, choiceUser = 0;
    bool choiceUserValidation = false;
    do{
        printf("Digite o numero para a tabuada!\n");
        scanf("%i", &userNumber);
        printTable(userNumber);
        printf("\n\nDeseja fazer uma nova tabuada? [1 - Sim / 2 - Não]\n");
        scanf("%i", &choiceUser);
        if(choiceUser == 1)
        {
            choiceUserValidation = true;
        }
        else if (choiceUser == 2)
        {
            choiceUserValidation = false;
        }
        else
        {
            printf("\n\t numero digitado nao reconhecido\n\n ");
        }
       }
    while(choiceUserValidation);
    printf("Software finalizado!");
}
