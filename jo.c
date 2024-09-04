#include <stdio.h>

int main(){
    int num, num2, op, result;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Escolha uma das operacoes a ser realizada: \n1.soma\n2.subtracao\n3.multiplicacao\n4.divisao\n");
    scanf("%d", &op);

    if(op<1 || op>=5){
        printf("Operacao invalida");
    }else{
        switch(op){
            case 1:
            result = num + num2;
            break;

            case 2:
            result = num - num2;
            break;

            case 3:
            result = num * num2;
            break;

            case 4:
            result = num / num2;
            break;
        }
        printf("O resultado da sua operacao eh: %d", result);
    }
}