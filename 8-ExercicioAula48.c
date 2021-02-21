#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main () {

    /* Crie um algoritmo que leia 3 valores para um vetor de 3 posições
    e depois calcule a média dos valores acessando o vetor. */

    int cont;
    float media = 0 , vetor[TAM];

    //lendo as posições dos vetores

    for (cont=0 ; cont < TAM ; cont++){
        printf("Digite o valor da posicao numero %d do vetor: ", cont);
        scanf("%d", &vetor[cont]);
        media = media + vetor[cont];
    }

    printf("A media dos valores inseridos no vetor eh %.2f\n", media / TAM);

}