#include <stdio.h>

int main(){
  int valor = 0;

  printf("Digite um numero maior que 0: ");
  scanf("%d", &valor);

   if(valor>0){
    printf("voce acertou!");
   } else{
    printf("Voce errou!");
   }
  
}