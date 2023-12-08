int main() {
    // Declarando o vetor A com 6 números inteiros
    int A[6] = {1, 0, 5, -2, -5, 7};


    // Calculando a soma de A[0], A[1] e A[5]
    int soma = A[0] + A[1] + A[5];


    // Exibindo a soma na tela
    printf("Soma de A[0], A[1] e A[5]: %d\n", soma);


    // Modificando o valor na posição 4 para 100
    A[4] = 100;


    // Exibindo cada valor do vetor A em uma linha
    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }


    return 0;
}

