#include <stdio.h>
int verificar(int vet[],int numero){
    
    for(int i = 0; i<12;i++){
        if(vet[i]==numero){
            return i;
        }
       }
       return -1; 
}
int main(){
    int vetor[12], numeros, posicao;
    for(int i = 0;i<12;i++){
        printf("Digite 12 numeros: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero a ser encontrado: ");
    scanf("%d", &numeros);

    posicao = verificar(vetor, numeros);
    
    if(posicao!= -1){
        printf("O numero foi encontrado!\nNa posicao %d", posicao);
    }else{
        printf("O numero nao foi encontrado!" );
    }
      
}