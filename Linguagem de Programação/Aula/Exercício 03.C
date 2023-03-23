#include <stdio.h>
int main(){
    int matriz [3][3] = {1,2,3,4,5,6,7,8,9};
    int linha, coluna = 0;
    int soma = 0;

    printf("\n");
    for (linha = 0; linha < 3; linha ++){
        printf("\n");
         for (coluna = 0; coluna < 3; coluna ++){
        printf("%d - ", matriz[linha][coluna]);
        }
    }
    //letra A
    printf("\n");
    soma = 0;
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            soma = soma + matriz[linha][coluna];
        }

    }
    printf("a) A soma dos elementos eh = %d", soma);
    //letra B
    printf("\n");
     soma = 1;
    for(linha = 0; linha < 3; linha++){

            soma = soma * matriz[linha][linha];


    }
    printf("b) O produto da diaginal principal eh = %d", soma);

    printf("\n");
    //letra C
    int maior = matriz [0][0];
    for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if(matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];
            }
        }
    }
    printf("c) O maior elemento da matriz eh = %d", maior);

    printf("\n");
    //letra D

    int somaColuna = 0;
    for (coluna = 0; coluna < 3; coluna++){
        for(linha = 0; linha < 3; linha++){
            somaColuna = somaColuna + matriz[linha][coluna];
        }
    }
    printf("d) Soma dos elementos da coluna eh = %d",linha+1, somaColuna);


return 0;
}

