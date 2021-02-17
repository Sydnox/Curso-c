#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que imprima os números de 10 até 0
    de forma regressiva usando o for. */


    //variaveis
    int i;
    
    //contagem decrescente do 10 até ao 0 utilizando o for
    
    for(i=10 ; i >= 0; i--){
        printf("%d\n",i);
    }

}