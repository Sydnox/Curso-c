#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que informe se o valor lido é primo ou não

    //variaveis
    int valor, i , aux = 0;

    printf("Digite um valor para saber se ele é primo:");
    scanf("%d", &valor);

    for(i=1;i <= valor ;i++){

        
        //Conferindo quantas vezes houve divisibilidade
        if (valor % i == 0){
            aux++;
        }
    }

    if (aux == 2) {
        printf("O Numero é primo\n");
    }else{
        printf("O Numero não é primo\n");
    }

}