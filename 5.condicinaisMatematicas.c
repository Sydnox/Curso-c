#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");

    //definindo variaveis 
    int a = 5 , b = 10 , c = 15;

    //maior
    if(a>2) {
        printf("%d é maior que 2\n", a);
    }

    //maior ou igual
    if(c >= b){
        printf("%d é maior ou igual que %d\n", c, b);
    }

    //menor
    if(a<10) {
        printf("%d é menor que 10\n", a);
    }
    //menor ou igual
    if(b <= c) {
        printf("%d é menor ou igual que %d\n", b, c);
    }

    //Diferente
    if(c != 10){
        printf("%d é diferente de 10\n", c);
    }
}