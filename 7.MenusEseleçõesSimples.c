#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //definindo variáveis
    int opcao;

    // confere e valida a opcao
    while(opcao < 1 || opcao > 3) {

        //interface de menu
        printf("Escolha uma opção:\n");
        printf("1-Opçao 1\n");
        printf("2-Opçao 2\n");
        printf("3-Opçao 3\n");

        //Lendo a opcao
        scanf("%d", &opcao);

        //Resultado de acordo com a opção escolhida
        switch (opcao){
            case 1:
                printf("Opção 1 foi escolhida\n");
                break;
            case 2:
                printf("Opção 2 foi escolhida\n");
                break;
            case 3:
                printf("Opção 3 foi escolhida\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
        }

    }
}