#include <stdio.h>

int main(){
    int mes;
    printf("Digite um mes do ano: ");
    scanf("%d", &mes);
    if(mes==1 || mes==3 || mes == 5 || mes == 7 || mes==8 || mes == 10||mes==12){
        printf("O mes possui 31 dias\n");
    }else if(mes == 4 || mes== 6|| mes==9 || mes== 11){
        printf("O mes possui 30 dias\n");
    }else if(mes == 2){
        printf("O mes possui 29 dias\n");
    }else{
        printf("Mes inexistente\n");
    }
      switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12:
        printf("O mes possui 31 dias");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("O mes possui 30 dias");
        break;
        case 2: printf("O mes possui 29 dias ");
        break;
        default:
        printf("Mes inexistente");
      }
      int som = 29;
      switch(mes){
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12:
         som = som + 1;
        case 4:
        case 6:
        case 9:
        case 11:
        som = som + 1;
        case 2: som = som + 0;
        printf("\nO mes possui %d dias", som);
      }
    }

    