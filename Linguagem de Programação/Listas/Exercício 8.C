#include <stdio.h>
#include <locale.h>
#include <math.h>

float volume, raio;

float valorRaio(float raio) {
    printf("\nInforme o valor do raio: ");
    scanf("%f", &raio);
    volume = (4.0/3.0) * 3.14 * pow(raio,3);
    printf("Seu volume é: %.2f\n", volume);
}
int main() {

setlocale(LC_ALL, "Portuguese");

int raio;

    printf("Vamos calcular o volume de uma esfera...\n");
    valorRaio(raio);
    return 0;
}
