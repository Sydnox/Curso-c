#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que imprima os número pares de 10 a 20 usando o for 

    //variveis
    int i ;

    //For
    for(i=10; i <= 20; i = i+2){
        printf("%d\n",i);
    }

}