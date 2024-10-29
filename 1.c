#include <stdio.h>

int main(){
    int vetor[10], numeros;
    for(int i = 0;i<10;i++){
        printf("Digite 10 numeros: ");
        scanf("%d", &numeros);
        vetor[i] = numeros;
    }
     for(int i=0;i<10;i++){
        printf("%d\n", vetor[i]);
     }
     printf("\n");

}