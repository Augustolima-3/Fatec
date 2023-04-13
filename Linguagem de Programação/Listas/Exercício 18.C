#include <stdio.h>
#include <locale.h>

float calcularMedia(float vetor[], int tamanho) {
  float soma = 0.0;
  for (int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }
  float media = soma / tamanho;
  return media;
}

int main() {
setlocale(LC_ALL, "Portuguese");

  float meuVetor[] = {1.5, 2.0, 3.0, 4.5, 5.2};

  int tamanho = sizeof(meuVetor) / sizeof(meuVetor[0]);

  float media = calcularMedia(meuVetor, tamanho);
  printf("A média é: %.2f", media);

  return 0;
}
