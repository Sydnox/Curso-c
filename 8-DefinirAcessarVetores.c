#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main () {

    //criar vetores
    int vetor[TAM], cont;

    //Passando valores para o vetor

    vetor [0] = 5;
    vetor [1] = 10;
    vetor [2] = 15;

    //Adicionando 1 para cada posição
    for(cont = 0 ; cont < TAM ; cont++){
        vetor[cont]= vetor[cont] + 1 ;
    }

    //Exibindo os valores do vetor
    printf("\nPosicao 0 : %d\n", vetor[0]);
    printf("\nPosicao 1 : %d\n", vetor[1]);
    printf("\nPosicao 2 : %d\n", vetor[2]);


    //lendo 3 valores para o vetor
    for(cont = 0 ; cont < TAM ; cont++){
        printf("Digite o valor para o vetor numero %d :",cont);
        scanf("%d", &vetor[cont]);
    }


    //Imprimindo vetor em um laço de repetição

    for(cont = 0 ; cont < TAM ; cont++){
        printf("\nPosicao %d : %d\n", cont , vetor[cont]);
    }

}