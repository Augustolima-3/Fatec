#include <stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a;

    printf("Endereco de A: %x\n", &a);
    printf("Valor guardado em A: %d\n", a);

    printf("P esta em: %x\n", p); //Enderoço para onde o P aponta
    printf("P aponta para: %x\n", &p); //Endereço onde P está armazenado
    printf("Valor armazenado onde P aponta: %d\n", *p); //Valor armanezamento naquele endereço que P aposta
    printf("\n");
    int b = 0;
    printf("Endereco de B: %x\n", &b);
    printf("Valor guardado em B: %d\n", b);
    printf("-------\t Mudando endereço de P \t ------");
    p= &b;
    printf("P esta em: %x\n", p); //Enderoço para onde o P aponta
    printf("P aponta para: %x\n", &p); //Endereço onde P está armazenado
    printf("Valor armazenado onde P aponta: %d\n", *p); //Valor armanezamento naquele endereço que P aposta

}


//O ponteiro está numa posição ou endereço de memória e o valor dele armazena um outro endereço/posição de memória
//%x retorna o valor em hexadecimal
