#include <stdio.h>


int main(){
    int resultado[11];
    int totalDaSoma=0;

    //primeiro for é responsavel por criar o total de tabuadas
    for(int i = 1; i <=10; i++){

        resultado [i]=0; //limpar lixo de memoria

    //segundo for é responsavel por criar as tabuadas individualmente    
    for(int j = 1; j <=10; j++){
        
        resultado[i] = resultado[i] + (i*j); // calcula total por tabuada
        
        totalDaSoma = totalDaSoma + (i*j); // calcula total de todas as tabuadas
        printf("\n %d x %d = %d", i, j, i*j);
    }
    printf("\n---RESULTADO TOTAL DA TABUADA %d: %d", i, resultado[i]);
    }
    printf("\n---O TOTAL DE TODAS TABUADA: %d\n", totalDaSoma);
    return 0;
}