#include <stdio.h>
int somar(int vetor[]){
 int soma = 0;
 for(int i = 0; i <5;i++){
    soma +=vetor[i];
 }
 return soma;
}
int main(){
    int vetor[5], numeros;
    for(int i = 0;i<5;i++){
        printf("Digite 5 numeros: ");
        scanf("%d", &numeros);
        vetor[i] = numeros;
}
 printf("A soma eh: %d",somar(vetor));
 }
