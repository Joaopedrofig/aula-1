#include <stdio.h>
#include <limits.h>
int maiornumero(int vet[]){
    int maior = 0;
    for(int i = 0; i<15;i++){
        if(vet[i]>maior){
            maior = vet[i];
        }
    }
    return maior;
}
int menornumero(int vet[]){
    int menor = INT_MAX;
    for(int i = 0; i<15;i++){
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
    return menor;
    }
int main(){
    int vetor[15], numeros;

    for(int i = 0; i<15; i++){
       printf("Digite 15 numeros: ");
       scanf("%d", &numeros);
       vetor[i] = numeros;
    }
    printf("O maior numero eh: %d\nE o menor eh: %d", maiornumero(vetor),menornumero(vetor));
}