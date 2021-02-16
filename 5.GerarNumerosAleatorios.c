#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
 
void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");

    //responsável por alimentar o rand de forma diferente
    srand((unsigned)time (NULL));

    //váriavel para receber o resto da divisão do número por 3 (aleatorio entre 0 e 2)
    int aleatorio = rand () % 3;

    printf("%d\n", aleatorio);
    //variavel para receber o resto da divisão do número por 5 (aleatorio entre 1 e 5)
    int aleatorioSegundo = (rand () % 5) + 1;

    //imprime o valor
    printf("%d\n", aleatorioSegundo);


}