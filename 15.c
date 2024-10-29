#include <stdio.h>
int somadevetores(int vet[], int vet2[]){
  int soma = 0;
  int soma2 = 0;
  int soma3 = 0;
  int soma_vetor[10];

  for(int i = 0;i<10;i++){
    soma = soma + vet[i];
  }
  for(int i=0;i<10;i++){
    soma2 = soma2 + vet2[i];
  }
  soma3 = soma+soma2;
  soma_vetor[10] = soma3;
  printf("O resultado da soma dos vetores eh: %d\n", soma_vetor[10]);
}
int main(){
    int vetor[10], vetor2[10];

    printf("Preenchimento dos vetores: \n");

    for(int i = 0; i<10;i++){
        printf("Digite 10 numeros inteiros para compor o vetor: \n");
        scanf("%d", &vetor[i]);
    }
    printf("\n");
    for(int i = 0; i<10;i++){
       printf("Digite 10 numeros inteiros para compor o segundo vetor: \n");
       scanf("%d", &vetor2[i]);
    }
    printf("\n");
    somadevetores(vetor,vetor2);
}