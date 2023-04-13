#include <stdio.h>
#include <locale.h>

int potencia(int base, int expoente) {
  int resultado = 1;
  int i;

  if (expoente == 0) {
    return 1;
  }

  for (i = 1; i <= expoente; i++) {
    resultado *= base;
  }

  return resultado;
}

int main() {
setlocale(LC_ALL, "Portuguese");

  int base, resultado;
  int expoente;

  printf("Digite a base: ");
  scanf("%d", &base);

  printf("Digite o expoente: ");
  scanf("%d", &expoente);

  resultado = potencia(base, expoente);

  printf("O resultado de %d elevado a %d é %d\n", base, expoente, resultado);

  return 0;
}
