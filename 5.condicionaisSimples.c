#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");

    //Definir variaveis , com char é igual
    int a = 4, opcao = 3;
    float b = 2.5;
        //condicional simples
        if (a == 4){
            printf("A variável a é igual a %d\n", a);
        }

        if (b == 2.5){
            printf("A variável b é igual a %.1f\n", b);
        }

            //Numero par ou impar
            if (a % 2 == 1){
                printf("O numero é ímpar\n");

                }else {
                printf("O numero é par\n");
                }
    
    //condicional composta
    if (opcao == 1){
        printf("A opcao = 1\n");

        }else if (opcao == 2){
            printf("\nA opcao = 2\n");
            
            }else{
                printf("A opcao não é igual\n");
            }




}