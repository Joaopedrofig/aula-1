#include <stdio.h>
int positivos(int vet[]){
    int numero = 0;
    for(int i = 0; i<10; i++){
        if(vet[i]>0){
            numero++;
        }
    }
       
    return numero;
     }
    int negativos(int vet[]){
    int numero = 0;
    for(int i = 0; i<10; i++){
        if(vet[i]<0){
            numero++;
        }
    }
    return numero;
    }

int main(){
    int vetor[10], numeros;

    for(int i = 0; i<10;i++){
        printf("Digite 10 numeros inteiros: ");
        scanf("%d", &numeros);
        vetor[i] = numeros;
    }
    printf("Os numeros positivos sao: %d\nE os negativos sao: %d", positivos(vetor), negativos(vetor));
}