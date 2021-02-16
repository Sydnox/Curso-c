#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");

    //definindo Variáveis
    char letra = 'x';

    //condicional simples
    if(letra == 'x'){
        printf("A letra é x.\n");
    }
    printf("O codigo da letra é %d\n", letra);


}