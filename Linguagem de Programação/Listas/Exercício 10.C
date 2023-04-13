#include <stdio.h>
#include <locale.h>

float celsius, fahrenheint;

float temperatura(float celsius) {
    fahrenheint = (celsius * 9/5) + 32;
    printf("Temperatura em graus Fharenheint: Fº%.1f\n", fahrenheint);
}

int main() {
setlocale(LC_ALL, "Portuguese");

    printf("## CONVERSOR DE TEMPERATURA ##\n");
    printf("\nTemperatura em graus Celsius: Cº");
    scanf("%f", &celsius);

    temperatura(celsius);

return 0;
}
