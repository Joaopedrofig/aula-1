#include <stdio.h>

int main(){
    int numeroesperado=10;
    int numero;
    printf("Digite um numero para adivinhar: ");
    scanf("%d", &numero);

    if (numeroesperado == numero){
        printf("Parabens voce acertou");
    }else if (numero<numeroesperado){
        printf("Voce errou, digitou um numero menor que o esperado");
    }else if(numero>numeroesperado){
        printf("Voce errou, digitou um numero maior que o esperado");
    }
}