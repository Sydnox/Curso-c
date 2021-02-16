#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    
    setlocale(LC_ALL, "");

    //definindo variaveis
    bool a = true , b = true;
    
    // Se a for verdadeiro
    if (a) {
        printf("a é verdadeiro\n");
    }
    // se B for falso
    if(b){
        printf("b é verdadeiro\n");
    }else{
        printf("b é falso\n");
    }


}