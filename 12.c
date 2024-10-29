#include <stdio.h>
#include <math.h>
float media(float vet[]){
    float soma = 0.0;
    float calculo;
    for(int i = 0; i<10;i++){
        soma = soma+vet[i];
    }
    calculo = soma/10;
    return calculo;
}
float calculodesviopadrao(float veto[]){
   float medias = media(veto);
    float somaquadrados = 0.0;
    for(int i = 0;i<10;i++){
        somaquadrados = somaquadrados + pow(veto[i] - medias, 2);
    }
    return sqrt(somaquadrados/10);
}
int main(){
    float vetor[10];
    for(int i = 0;i<10;i++){
        printf("Digite 10 numeros para serem armazenados em um vetor: ");
        scanf("%f", &vetor[i]);
    }
    float desviopadrao = calculodesviopadrao(vetor);
    printf("Desvio padrao : %.2f\n", desviopadrao);
}