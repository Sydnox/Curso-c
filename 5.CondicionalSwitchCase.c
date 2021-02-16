#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");

    // Definindo variaveis
    int a = 2;
    char b = 'x' ;

    switch (a){
        case 1:
            printf("Opção escolhida :1\n");
            break;
        case 2:
            printf("Opção escolhida :2\n");
            break;
        case 3:
            printf("Opção escolhida :3\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
    //Switch com char
    switch (b) {
        case 'x':
            printf("A opção escolhida foi x\n");
            break;
        case 'h':
            printf("A opção escolhida foi h\n");
            break;
        default:
            printf("A opção não é válida");
            break;
    }



    


}