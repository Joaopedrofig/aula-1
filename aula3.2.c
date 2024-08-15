#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero:");
    scanf("%d",&num2);
    
    printf("\nO resultado de %d == %d eh: %d",num1,num2, num1==num2);
    printf("\nO resultado de %d > %d eh: %d",num1,num2, num1>num2);
    printf("\nO resultado de %d < %d eh: %d",num1,num2, num1<num2);
    printf("\nO resultado de %d >= %d eh: %d",num1,num2, num1>=num2);
    printf("\nO Resultado de %d <= %d eh: %d",num1,num2, num1<=num2);
}