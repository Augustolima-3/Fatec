#include <stdio.h>
#include <string.h>
int main (){
  
  char string[50];
  int ra = 0;
  int k = 0;
  
  printf("\nInsira uma string para criptografar: ");
  gets(string);
  printf("\nInforme o valor da chave criptografada: ");
  scanf("%d", &k);
  printf("\nInforme o ultimo digito do seu RA: ");
  scanf("%d", &ra);
  k = ra + k;
  for (int i = 0; i < strlen(string); i++){
    string[i] += K;
    if(string [i] > 90 && string[i] < 97 || string [i] > 122){
        string[i] -= 26;
    }
  }
    printf("\nString criptografada: %s", string);
    
return 0;
}
