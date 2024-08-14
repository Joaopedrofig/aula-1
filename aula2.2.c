#include <stdio.h>

int main(){

    float produto;
    float descont;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    printf("Digite o valor do desconto: ");
    scanf("%f", &descont);

    float valor = produto - ((descont/100)*produto);
    printf("O valor do produto sera de: %.2f", valor);
}