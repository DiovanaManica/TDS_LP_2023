#include <stdio.h>


int main() {
    // Declarando o vetor de 10 posições
    int vetor[10];


    // Lendo os valores para o vetor
    printf("Digite 10 valores para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    // Inicializando as variáveis para armazenar o maior e o menor elementos
    int maior = vetor[0];
    int menor = vetor[0];


    // Encontrando o maior e o menor elemento do vetor
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }


    // Imprimindo o maior e o menor elemento
    printf("O maior elemento do vetor é: %d\n", maior);
    printf("O menor elemento do vetor é: %d\n", menor);


    return 0;
}
