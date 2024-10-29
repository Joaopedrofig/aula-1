#include <stdio.h>
void rotacionarDireita(int vetor[]) {
    int ultimo = vetor[12 - 1]; 
    for (int i = 11; i > 0; i--) {
        vetor[i] = vetor[i - 1];
    }

    vetor[0] = ultimo;  
}

int main() {
    int vetor[12];

    
    printf("Digite 12 numeros inteiros:\n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &vetor[i]);
    }

   
    rotacionarDireita(vetor);

    
    printf("Vetor rotacionado:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
}