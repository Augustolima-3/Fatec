#include <stdio.h>

int verificaPrimo(int numeroDigitado) {
    if (numeroDigitado <= 1) return 0;
    if (numeroDigitado <= 3) return 1;
    if (numeroDigitado % 2 == 0 || numeroDigitado % 3 == 0) return 0;

    for (int i = 5; i * i <= numeroDigitado; i += 6) {
        if (numeroDigitado % i == 0 || numeroDigitado % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main() {
    int novaOperacao;

    do {
        int numeroDigitado, contadorPar = 0, contadorImpar = 0, contadorPrimo = 0;

        printf("Digite um numero entre 0 e 500: ");
        scanf("%d", &numeroDigitado);

        while (numeroDigitado < 0 || numeroDigitado > 500){
            printf("Digite um numero entre 0 e 500: ");
            scanf("%d", &numeroDigitado);
        }

        printf("Numeros pares ate %d: ", numeroDigitado);
        for (int i = 0; i <= numeroDigitado; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                contadorPar++;
            }
        }
        printf("\nQuantidade de pares: %d\n", contadorPar);

        printf("Numeros impares ate %d: ", numeroDigitado);
        for (int i = 1; i <= numeroDigitado; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
                contadorImpar++;
            }
        }
        printf("\nQuantidade de impares: %d\n", contadorImpar);

        printf("Numeros primos ate %d: ", numeroDigitado);
        for (int i = 2; i <= numeroDigitado; i++) {
            if (verificaPrimo(i)) {
                printf("%d ", i);
                contadorPrimo++;
            }
        }
        printf("\nQuantidade de primos: %d\n", contadorPrimo);

        printf("Deseja realizar uma nova operacao? 1-sim | ?-nao: ");
        scanf("%d", &novaOperacao);
    } while (novaOperacao == 1);

    printf("\nAte mais..");

    return 0;
}
