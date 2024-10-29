#include <stdio.h>
#include <limits.h>
float maiornota(float mat[30][3], int quantid){
    
    float nota [30];
    float maior = 0.0;
    for (int c = 0; c < quantid; c++){
        for (int l = 0; l < 3; l++ ){
         if(mat[c][l]>maior){
            maior = mat[c][l];
           }
        }
      nota[c] = maior;
    }
    return maior;
}
float menornota(float mat[30][3], int quantid){
    
    float nota [30];
    float menor = INT_MAX;
    for (int c = 0; c < quantid; c++){
        for (int l = 0; l < 3; l++ ){
         if(mat[c][l]<menor){
            menor = mat[c][l];
         } 
    }
    nota[c] = menor;
    }
     return menor;
}
float calcularmedia(float matriz[30][3], int quant, int alunos){
   float media[30];
   for(int i=0;i<quant;i++){
    float media1 = 0.0;
    int soma = 0;
    for(int j=0;j<3;j++){
      soma = soma+matriz[i][j]; 
    }
    media1 = (float) soma/3;
    media[i] = media1;
   }
   for(int i=0;i<quant;i++){
    printf("A media do aluno %d eh %.2f\n", alunos, media[i]);
   }
}
float mediageral(float mat[30][3], float quantidade){
   float media2[30];
   float soma2 = 0.0;
   for(int i=0;i<quantidade;i++){
    float media3 = 0.0;
    float soma = 0;
    
    for(int j=0;j<3;j++){
      soma = soma+mat[i][j]; 
    }
    media3 = (float) soma/3;
    soma2 = soma2 + media3;
   }
   float mediasgeral = (float)soma2/quantidade;
   return mediasgeral;
}
void relatorio(float mat[30][3], float quant, int alunos){
  float mediageral2[30];
   int soma2 = 0;
   for(int i=0;i<quant;i++){
    float media3 = 0.0;
    int soma = 0;
    
    for(int j=0;j<3;j++){
      soma = soma+mat[i][j]; 
    }
    media3 = (float) soma/3;
    soma2 = soma2 + media3;
   }
   int mediasgeral = (float)soma2/quant;
    
   float media[30];
   for(int i=0;i<quant;i++){
    float media1 = 0.0;
    int soma3 = 0;
    for(int j=0;j<3;j++){
      soma3 = soma3+mat[i][j]; 
    }
    media1 = (float) soma3/3;
    media[i] = media1;
   }
   for(int i=0;i<quant;i++){
    if(media[i]>=mediasgeral){
      printf("A media do aluno %d eh %.2f = !!APROVADO!!\n", alunos, media[i]);
    }
    if(media[i]<mediasgeral){
      printf("A media do aluno %d eh %.2f = !!REPROVADO!!\n", alunos, media[i]);
    }
}
}
int main(){
  int alunos[30], quantidade , alunoslidos, soma=0;
  float notas[30][3], notaslidas;

  printf("Digite a quantidade de alunos que voce deseja cadastrar, o maximo permitido sao 30.\nquantidade: ");
  scanf("%d", &quantidade);

  if(quantidade>30 || quantidade<=0){
    printf("VALOR INVALIDO");
    return 0;
  }
   
  for(int i = 0; i < quantidade; i++ ){
    printf("Digite o ID do aluno: ");
    scanf("%d", &alunoslidos);
    alunos[i] = alunoslidos;
    for(int j = 0; j < 3; j++ ){
        printf("Digite a nota %d do aluno %d: ", (j+1), alunoslidos);
        scanf("%f", &notas[i][j]);
    }
  }
  calcularmedia(notas,quantidade,alunoslidos);
  int maior = maiornota(notas,quantidade);
  printf("A maior nota da sala foi: %d\n",maior);
  int menor = menornota(notas,quantidade);
  printf("A menor nota da sala foi: %d\n",menor);
  printf("\nA media geral da turma eh: %.2f\n", mediageral(notas,quantidade));
  relatorio(notas,quantidade,alunoslidos);
}