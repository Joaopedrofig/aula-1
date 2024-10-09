#include <stdio.h>
int somar(int num1,int num2){
    return num1+num2;
}
int subtrair(int num1, int num2){
    return num1 - num2;
}
float dividir(float num1, float num2){
    return num1/num2;
}
int multiplicar(int num1, int num2){
    return num1*num2;
}
int fatorial(int num1, int valor){
    int fat = 1;
   for( int j = 1; j<=num1; j++){
      fat*=j;
   }
     return fat;
}
int potencia(int base,int expoente, int resultado){
    resultado = 1;
    for(int i = 1; i<=expoente;i++){
        resultado = resultado * base;
    }
    return resultado;
}
int menu(){
  int num,num2, escolha, alt, fat = 1, resultado = 1;
    char continuar;
   do
   {
    
   printf("Escolha qual tipo de conta voce deseja fazer: \n1.soma\n2.subtrair\n3.divisao\n4.multiplicacao\n5.fatorial\n6.potencia\n7.finalizar programa: \n");
   scanf("%d", &escolha);
   
   
   if(escolha==1){
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    alt = somar(num,num2);
    printf("%d", alt);
    }
    
    else if(escolha==2){
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    alt = subtrair(num,num2);
    printf("%d", alt);
    }
    
    else if(escolha == 3){
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    alt = dividir(num,num2);
    printf("%d", alt);
    }
    
    else if(escolha==4){
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    alt = multiplicar(num,num2);
    printf("%d", alt);
    }
   
   else if(escolha==5){ 
    printf("Digite um numero: ");
    scanf("%d", &num);
    alt = fatorial(num, fat);
    printf("%d", alt);
    }

    else if(escolha==6){
    printf("Digite a base: ");
    scanf("%d", &num);
    printf("Digite o expoente: ");
    scanf("%d", &num2); 
    alt = potencia(num,num2, resultado);
    printf("%d", alt);
    }
    else if(escolha==7){
        printf("Programa finalizado!!!!");
        return 0;
    }
    printf("\nDeseja continuar (s/n)? ");
    scanf("%d", &continuar);
   } while (continuar == 'S' || continuar == 's');
    if(continuar == 's' || continuar == 's'){
        
    }
}

int main(){
   menu();
}