#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Variáveis
    int cont;

    //contando até 10; valor inicial , até quanto , de quanto em quanto
    //tabuada do 5
    for(cont = 1;cont <= 10; cont++){
        printf("\n%d X 5 = %d",cont , cont * 5);
    }

    //contando de 2 em 2(
    for(cont = 0;cont <= 10;cont = cont + 2){
        printf("\n%d",cont);
    }
    //contagem regressiva
    for(cont=10;cont>=1;cont = cont-1){
        printf("\n%d",cont);
    }

    

}