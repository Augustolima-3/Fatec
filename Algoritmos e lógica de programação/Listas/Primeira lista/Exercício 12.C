#include <stdio.h>
int main()
{
    float c, f, temp;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f%*c", &c);

    f = (9 * c + 160) / 5;

    printf("A temperatura convertida de graus Celsius para Fahrenheit eh: %3.2f", f);



    getchar();
    return 0;
}
