#include <stdio.h>
int media(int numeros[]){
    int soma = 0;
    int media = 0;
    for(int i = 0; i<8;i++){
        soma+=numeros[i];
        media = soma/8;
    }
    
    return media;
}
int main(){
    int vetor[8], numeros, soma;

    for(int i = 0; i<8; i++){
        printf("Digite 8 numeros: ");
        scanf("%d", &numeros);
        vetor[i] = numeros;
    }
      printf("A media eh %d",media(vetor) );
}