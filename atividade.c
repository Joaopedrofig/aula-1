#include <stdio.h>

int main (){
    int num;
    printf("Digite um numero de minutos: ");
    scanf ("%d", &num);
    if(num>0){
        printf("O resultado do numero em segundos eh: %d", num*60);
    }else{
        printf("Nao eh possivel calcular");
    }
}