#include <stdio.h>

int main(){
    int idades[20];
    int idadelida = 0, menor, maior, media, diferenca, quantidade = 0, soma = 0;

    for(int i = 0; i<20; i++){
        printf("Digite as idades: ");
        scanf("%d", &idadelida);
        if(idadelida<0){
            break;
        }
        quantidade++;
        idades[i] = idadelida;

    
    if(idadelida>maior){
        maior = idadelida;
    }if(idadelida<menor){
        menor = idadelida;
    }
    diferenca = maior - menor;
    for(int j=0;j<=quantidade;j++){
       soma = soma +j;
    }
    media = soma/quantidade;
  }
  printf("Maior idade: %d\n Menor idade : %d\n Media das idades: %d\nDiferenca da maior para a menor: %d\n", maior, menor, media, diferenca);
}
