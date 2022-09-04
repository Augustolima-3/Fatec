#include <stdio.h>
int main (){
    float nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Digite as tres notas e seus pesos: ");
    scanf("%f%*c", &nota1);
    scanf("%f%*c", &nota2);
    scanf("%f%*c", &nota3);
    scanf("%f%*c", &peso1);
    scanf("%f%*c", &peso2);
    scanf("%f%*c", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 * peso2 * peso3);

    printf("%3.2f", media);
getchar();
return 0;
}
