#include <stdio.h>
int main (){

    struct {
        int cod;
        char nome[30];
        int idade;
        float salario;
    }pessoa;

    printf("Digite o codigo: ");
    scanf("%d", &pessoa.cod);
    printf("Digite o nome: ");
    scanf("%s", &pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite o salario: ");
    scanf("%f", &pessoa.salario);

    printf("Codigo: %d\tNome: %s\nIdade: %d\tSalario: %2.f", pessoa.cod, pessoa.nome, pessoa.idade, pessoa.salario);

    getchar();
    return 0;
}
