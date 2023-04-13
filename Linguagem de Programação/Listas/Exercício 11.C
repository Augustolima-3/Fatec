#include <stdio.h>
#include <locale.h>

int verificarTriangulo(float a, float b, float c);
void determinarTipoTriangulo(float a, float b, float c);

int main() {
setlocale(LC_ALL, "Portuguese");

  float a, b, c;

  printf("Digite o valor do primeiro lado do triângulo: ");
  scanf("%f", &a);

  printf("Digite o valor do segundo lado do triângulo: ");
  scanf("%f", &b);

  printf("Digite o valor do terceiro lado do triângulo: ");
  scanf("%f", &c);

  if (verificarTriangulo(a, b, c)) {
    determinarTipoTriangulo(a, b, c);
  } else {
    printf("Os valores informados não formam um triângulo.\n");
  }
  return 0;
}

int verificarTriangulo(float a, float b, float c) {
  if (a < b + c && b < a + c && c < a + b) {
    return 1;
  } else {
    return 0;
  }
}

void determinarTipoTriangulo(float a, float b, float c) {
  if (a == b && b == c) {
    printf("O triângulo é equilátero.\n");
  } else if (a == b || a == c || b == c) {
    printf("O triângulo é isósceles.\n");
  } else {
    printf("O triângulo é escaleno.\n");
  }
}
