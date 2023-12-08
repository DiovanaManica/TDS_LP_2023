#include <stdio.h>


int main() {
    // Declarando o vetor de 8 posições
    int vetor[8];


    // Lendo os valores para o vetor
    printf("Digite os valores para o vetor de 8 posições:\n");
    for (int i = 0; i < 8; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }


    // Lendo os valores de X e Y
    int X, Y;
    printf("Digite os valores de X e Y (posições no vetor): ");
    scanf("%d %d", &X, &Y);


    // Verificando se X e Y estão dentro do intervalo válido
    if (X >= 0 && X < 8 && Y >= 0 && Y < 8) {
        // Calculando e exibindo a soma dos valores em X e Y
        int soma = vetor[X] + vetor[Y];
        printf("A soma dos valores em X e Y é: %d\n", soma);
    } else {
        printf("Posições inválidas. Certifique-se de que X e Y estão no intervalo de 0 a 7.\n");
    }


    return 0;
}
