#include <stdio.h>
int mult(int vet[]){
   int multiplicacao = 1;
   for(int i = 0;i<6;i++){
    multiplicacao *=vet[i];
   }
    return multiplicacao;
}
int main(){
    int vetor[6], numeros;
     
    for(int i = 0; i<6;i++){
       printf("Digite 6 numeros: ");
        scanf("%d", &vetor[i]);
    }
   printf("O resultado eh: %d", mult(vetor));
    
}