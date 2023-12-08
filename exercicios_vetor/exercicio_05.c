#include <stdio.h>


int main() {
    // Declarando o vetor de 5 posições
    int vetor[5];


    // Lendo os valores para o vetor
    printf("Digite 5 valores para o vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    // Inicializando as variáveis para armazenar a posição do maior e do menor elementos
    int pMaior = 0;
    int pMenor = 0;


    // Encontrando a posição do maior e do menor elemento do vetor
    for (int i = 1; i < 5; i++) {
        if (vetor[i] > vetor[pMaior]) {
            pMaior = i;
        }
        if (vetor[i] < vetor[pMenor]) {
            pMenor = i;
        }
    }


    // Imprimindo a posição do maior e do menor elemento
    printf("A posição do maior (%d) é: %d\n", vetor[pMaior], pMaior + 1);
    printf("A posição do menor (%d) é: %d\n", vetor[pMenor], pMenor + 1);


    return 0;
}
