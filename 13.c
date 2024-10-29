#include <stdio.h>
int media(int vet[]){
   int soma = 0;
   int media;
    for(int i = 0;i<15;i++){
        soma = soma+vet[i];
    }
    media = soma/15;
    return media;
    }
    int contagem(int veto[],int mediaa){
        int quantidade = 0;
        for(int i = 0; i<15;i++){
            if(veto[i]>mediaa){
                quantidade++;
            }
        }
    
    return quantidade;
}
int main(){
    int vetor[15],numeros, medias = 0;

    for(int i = 0;i<15;i++){
        printf("Digite 15 numeros inteiros: ");
        scanf("%d", &vetor[i]);
        
    }
    medias = media(vetor);
    printf("A media dos numeros eh: %d\n", medias);
    printf("A quantidade de numeros acima da media sao: %d", contagem(vetor,medias));
    
}