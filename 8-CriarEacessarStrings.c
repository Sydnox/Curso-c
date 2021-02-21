#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main (){

    //variáveis
    char palavra[255];

    //Instruçao
    printf("Escreva uma palavra ");

    //limpa o buffer
    setbuf(stdin, 0);

    //lê a string
    fgets(palavra, 255, stdin);

    //limpa as casas não utlizadas
    palavra[strlen(palavra)-1] = '\0';

    //escreve a palavra na tela
    printf("%s\n", palavra);


}