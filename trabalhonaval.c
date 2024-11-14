#include <stdio.h>
#include <string.h>
#define BARCO_A1 1
#define BARCO_A2 2
#define BARCO_A3 3
#define BARCO_A4 4
#define BARCO_B1 1
#define BARCO_B2 2
#define BARCO_B3 3
#define BARCO_B4 4
int jogadas(int campo[4][4]){
    int posicao_x,posicao_y;
    printf("Posicao X: "); scanf("%d", &posicao_x);
    printf("Posicao Y: "); scanf("%d", &posicao_y);
    if(campo[posicao_x][posicao_y]!=0){
        int pontuacao = campo[posicao_x][posicao_y];
        printf("PONTUOU! Pontos: %d\n", pontuacao);
        campo[posicao_x][posicao_y] = 0; 
        return pontuacao;
    }else{
        printf("Nenhum barco nessa posicao\n");
        return 0;
    }
    }
    
void posicionarbarco(int barco, int campo[4][4]){
   int posicao_x,posicao_y;
    while(1){
    printf("Posicao X: "); scanf("%d", &posicao_x);
    printf("Posicao Y: "); scanf("%d", &posicao_y);
    if (posicao_x >= 0 && posicao_x < 4 && posicao_y >= 0 && posicao_y < 4 && campo[posicao_x][posicao_y] == 0) {
            campo[posicao_x][posicao_y] = barco;
            break;
        } else {
            printf("\nPosicao invalida ou ja ocupada! Digite valores entre 0 e 3 para linha e coluna.\n");
        }
    }
}

int main(){
  int campo1 [4][4], campo2 [4][4];
  char jogador1[61], jogador2[61];
  int pontos1 = 0,pontos2 = 0;
  printf("\n\t\t\tBATALHA NAVAL\t\t\t\n");
  printf("\n\n\t---------------------------------------------\n\n");
  printf("Jogador 1, digite seu nome: ");
  scanf( "%s", jogador1);
  printf("Jogador 2, digite seu nome: ");
  scanf("%s", jogador2);

  for(int i = 0;i<4;i++){
    for(int j =0;j<4;j++){
        campo1[i][j] = 0;
        campo2[i][j] = 0;
    }
  }
  printf("\n %s posicione seu primeiro barco\n ", jogador1);
  posicionarbarco(BARCO_A1, campo1);
  printf("\n %s posicione seu segundo barco\n ", jogador1);
  posicionarbarco(BARCO_A2, campo1);
  printf("\n %s posicione seu terceiro barco\n ", jogador1);
  posicionarbarco(BARCO_A3, campo1);
  printf("\n %s posicione seu quarto barco\n ", jogador1);
  posicionarbarco(BARCO_A4, campo1);
  
  printf("\n %s posicione seu primeiro barco\n ", jogador2);
  posicionarbarco(BARCO_B1, campo2);
  printf("\n %s posicione seu segundo barco \n", jogador2);
  posicionarbarco(BARCO_B2, campo2);
  printf("\n %s posicione seu terceiro barco \n", jogador2);
  posicionarbarco(BARCO_B3, campo2);
  printf("\n %s posicione seu quarto barco \n", jogador2);
  posicionarbarco(BARCO_B4, campo2);

  
  printf("\n %s faca sua primeira jogada\n ", jogador1);
  pontos1 += jogadas(campo2);
  printf("\n %s faca sua segunda jogada\n ", jogador1);
  pontos1 += jogadas(campo2);
  printf("\n %s faca sua terceira jogada\n ", jogador1);
  pontos1 += jogadas(campo2);
  printf("\n %s faca sua quarta jogada\n ", jogador1);
  pontos1 += jogadas(campo2);

  printf("\n %s faca sua primeira jogada\n ", jogador2);
  pontos2 += jogadas(campo1);
  printf("\n %s faca sua segunda jogada\n ", jogador2);
  pontos2 += jogadas(campo1);
  printf("\n %s faca sua terceira jogada\n ", jogador2);
  pontos2 += jogadas(campo1);
  printf("\n %s faca sua quarta jogada\n ", jogador2);
  pontos2 += jogadas(campo1);

  printf("\t\nPontuacao final:\t\n");
  printf("%s %d pontos\n",jogador1,pontos1);
  printf("%s %d pontos\n",jogador2,pontos2);

}