#include <stdio.h>
#include <locale.h>

int hora, minuto, segundo;

int converter(int hora, int minuto, int segundo) {

    printf("Informe 3 valores para convertermos em segundos!\n");
    printf("\n");

    printf("Hora(as): ");
    scanf("%d", &hora);

    printf("Minuto(os): ");
    scanf("%d", &minuto);

    printf("Segundo(os): ");
    scanf("%d", &segundo);

    hora *= 3600;
    minuto *= 60;
    segundo = segundo;

    printf("\n-CONVERSÃO PARA SEGUNDOS-\n");

    printf("Hora(as): %d segundo(os)\n", hora);
    printf("Minuto(os): %d segundo(os)\n", minuto);
    printf("Segundo(os): %d segundo(os)\n", segundo);
}

int main() {
setlocale(LC_ALL, "Portuguese");

int hora, minuto, segundo;

    converter(hora, minuto, segundo);

}
