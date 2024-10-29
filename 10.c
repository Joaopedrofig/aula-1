#include <stdio.h>
void reverter(int vet[]){
    for(int i=20;i>=0;i--){
        printf("%d\n", vet[i]);
    }
    printf("\n");
}
int main(){
   int vetor[20];

   for(int i=0;i<20;i++){
    printf("Digite 20 numeros para serem armazenados em um vetor: ");
    scanf("%d", &vetor[i]);
   }
   reverter(vetor);
}