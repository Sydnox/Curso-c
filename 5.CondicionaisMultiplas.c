#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");

    //definindo variaveis
    int a = 10;

    //conectivo logico e ( AND )
    if(a > 5 && a<15){
        printf("A variavel a está entre 5 e 15\n");
    }

    //conectivo logico ou (Or)
    if (a > 5 || a < 15){
        printf("A variavel a é maior que 5 ou menor que 15\n");
    }



}