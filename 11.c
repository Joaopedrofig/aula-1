#include <stdio.h>
int removerRepetidos(int vetor[], int n) {
    int i, j, k;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (vetor[i] == vetor[j]){
                for (k = j; k < n - 1; k++) {
                    vetor[k] = vetor[k + 1];
                }
                n--;  
                j--;  
            }
        }
    }
    return n;  
}

int main() {
    int vetor[15];
    int i, novoTamanho;

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    novoTamanho = removerRepetidos(vetor, 15);

    printf("Vetor sem repeticoes:\n");
    for (i = 0; i < novoTamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}