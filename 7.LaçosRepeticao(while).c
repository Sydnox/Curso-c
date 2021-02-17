#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //definindo variáveis
    int a = 1 , b = 10;

    //contando até 10
    while (a <= 10){

        //imprimindo 'a' na tela
        printf("%d\n",a);

        //incremento
        a++;

    }

    //contando até 10
    while (b >= 1){

        //imprimindo 'a' na tela
        printf("%d\n",b);

        //incremento
        b-- ;

    }
}