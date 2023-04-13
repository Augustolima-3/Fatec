#include <stdio.h>
#include <locale.h>

int testePrimo(int num) {
  if (num < 2) {
    return 0;
  }

  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int contaPrimo(int n) {
  int count = 0;

  for (int i = 2; i < n; i++) {
    if (testePrimo(i)) {
      count++;
    }
  }
  return count;
}

int main() {
setlocale(LC_ALL, "Portuguese");

  int n;

  printf("Digite um número inteiro positivo: ");
  scanf("%d", &n);

  printf("Existem %d números primos abaixo de %d.\n", contaPrimo(n), n);

  return 0;
}
