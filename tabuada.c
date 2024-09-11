#include <stdio.h>

int main(){
    int num, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i=1; i<=5;i=i+1){
        for(int j = 1; j<=10; j = j+1){
            int resultado = i*j;
            printf("%d * %d = %d\n", i, j, resultado);
        }
        printf("\n");
    }
}