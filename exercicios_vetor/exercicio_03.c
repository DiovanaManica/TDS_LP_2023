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


    // Contando e escrevendo a quantidade de valores pares
    int contaPares = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contaPares++;
        }
    }


    printf("O vetor possui %d valor(es) par(es).\n", contaPares);


    return 0;
}
