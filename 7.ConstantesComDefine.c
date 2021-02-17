#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
//Tam passa a valer sempre 10

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Mostra no ecrã
    printf("%d\n", TAM);

    //Variáveis
    int i;

    //contagem até 10
    for(i=0;i <= TAM;i++){
        printf("%d\n",i);
    }


 
 
}