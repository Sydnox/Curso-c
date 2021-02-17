#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //definindo variáveis
    int a = 1 , b = 10;

    /* contando até 10
    while (a <= 10){

        //imprimindo 'a' na tela
        printf("%d\n",a);

        //incremento
        a++;

    } 
     */
    do{
        //imprimindo 'a' na tela
        printf("%d\n",a);

        //incremento
        a++;
    }while(a <= 10);

}