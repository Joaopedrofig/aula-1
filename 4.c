#include <stdio.h>
void par(int numeros []){

    for(int i = 0; i<20;i++){
      if(numeros[i]%2==0){
        printf("Os numeros pares sao: %d\n", numeros[i]);
      }
    }
    
}
void impar(int numeros []){

    for(int i = 0; i<20;i++){
      if(numeros[i]%2==1){
        printf("Os numeros impares sao: %d\n", numeros[i]);
      }
    }
    
}
int main(){
    int vetor[20], numeros;
    
    for(int i = 0; i<20; i++){
       printf("Digite 20 numeros:\n ");
        scanf("%d", &numeros);
        vetor[i] = numeros;
    }
     par(vetor);
     printf("\n");
     impar(vetor);
}