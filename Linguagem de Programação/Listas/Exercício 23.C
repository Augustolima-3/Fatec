#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main () {
setlocale(LC_ALL, "Portuguese");

int num, i;

    printf("## HORÓSCOPO ##\n");
    printf("Quantas pessoas você quer calcular? ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
    int dia, mes, ano, idade;

        printf("\nInforme o dia: ");
        scanf("%d", &dia);

        printf("Informe o mês: ");
        scanf("%d", &mes);

        printf("Informe o ano: ");
        scanf("%d", &ano); Sleep(500);

        idade = 2023 - ano;
        printf("\nVocê tem (ou irá fazer) %d anos!\n", idade);

        if (idade >= 18) {
            printf("É maior de idade!\n");
        } else {
            printf("É menor de idade!\n");
        }

        if (dia >= 21 && mes == 3 && dia <= 20 && mes == 4) {
            printf("Você é do signo de Áries!\n");
        } else if (dia >= 21 && mes == 4 || dia <= 20 && mes == 5) {
            printf("Você é do signo de Touro!\n");
        } else if (dia >= 21 && mes == 5 || dia <= 20 && mes == 6) {
            printf("Você é do signo de Gêmeos!\n");
        } else if (dia >= 21 && mes == 6 || dia <= 22 && mes == 7) {
            printf("Você é do signo de Câncer!\n");
        } else if (dia >= 23 && mes == 7 || dia <= 22 && mes == 8) {
            printf("Você é do signo de Leão!\n");
        } else if (dia >= 23 && mes == 8 || dia <= 22 && mes == 9) {
            printf("Você é do signo de Virgem!\n");
        } else if (dia >= 23 && mes == 9 || dia <= 22 && mes == 10) {
            printf("Você é do signo de Libra!\n");
        } else {
            printf("Seu signo não entrou na tabela!\n");
        } Sleep(700);
    }
printf("\n");

return 0;

}
