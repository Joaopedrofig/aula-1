#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i;
    int t;
    int n;
    int num;

    srand((unsigned)time(NULL));{
        for(i=0;i<1;i++)
        n = ("%d\n", rand() % 10);
        //printf("%d", n);
    }
    printf("\n\nVoce possui tres tentativas de acertar um numero aleatorio");
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    for(t=1;t<=2;t++)
    if (num==n){
        printf("VOCE ACERTOU\n\n");
    }else if (num>n){
       printf("\n\nVOCE ERROU! Digitou um numero maior que o esperado\nTente novamente: ");
       scanf("%d", &num);
    }else if(num<n){
        printf("VOCE ERROU!Digitou um numero menor que o esperado\nTente novamente: ");
        scanf("%d", &num);
    }if(num!=n){
        printf("\nSuas chances acabaram!");
    }else{
        printf("VOCE ACERTOU");
    }if(num!=n){
       printf("O numero gerado era: %d", n);
    }
}
