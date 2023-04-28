#include <stdio.h>
//valor de uma constante eh declarado em maiusculo
#define MAX_ALUNOS 5
//variavel definida pelo programador
typedef float nota;

enum mes{janeiro =1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};

struct aluno{
    int codigo;
    char nome[20];
    int mes_nascimento;
    nota prova1;
    nota prova2;
    nota prova3;
    nota prova4;
    nota nota_media;
};
int main(){
    struct aluno Alunos[MAX_ALUNOS];
    int i;
    for(i=0; i < MAX_ALUNOS; i++){
        printf("\n codigo do aluno: ");
        scanf("%d", &Alunos[i].codigo);
        printf("\n nome do aluno: ");
        scanf("%s", &Alunos[i].nome);
        printf("\n mes de nascimento do aluno: ");
        scanf("%d", &Alunos[i].mes_nascimento);
        printf("\n nota prova 1: ");
        scanf("%f", &Alunos[i].prova1);
        printf("\n nota prova 2: ");
        scanf("%f", &Alunos[i].prova2);
        printf("\n nota prova 3: ");
        scanf("%f", &Alunos[i].prova3);
        printf("\n nota prova 4: ");
        scanf("%f", &Alunos[i].prova4);
    }
    for(i=0; i < MAX_ALUNOS; i++){
        printf("codigo: %d, nome: %s, mes nascimento: %d, notas provas: %f - %f - %f - %f", Alunos[i].codigo, Alunos[i].nome, Alunos[i].mes_nascimento, Alunos[i].prova1, Alunos[i].prova2, Alunos[i].prova3, Alunos[i].prova4);
    }
    return 0;
}
