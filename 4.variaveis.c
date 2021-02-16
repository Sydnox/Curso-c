#include <stdio.h>
#include <stdlib.h>

void main () {

   // imprime hello
   printf("Hello\n");

    // dar valores a variaveis e escreve-las no ecrã
    int a = 10;
    int b = 5;
    printf("O valor de a eh %d \n", a);
    printf("a+b é igual a %d \n", a + b);

    printf("Por favor introduza o novo valor da variável a\n");
    // le o valor que o usuário vai escrever
    scanf("%d", &a);
    // retorna o valor que escreveu
    printf("O novo valor da variável a eh %d\n", a);

    //para valores decimais basta trocar %d por %f

    //ler letras
    char letra = 't' ;
    printf("O valor da letra eh = %c \n" , letra);
    //Antes de scanear a letra devemos limpar o buffer ou seja dar uma descarga , 
    
    // stdin é a entrada principal
    fflush(stdin);

    printf("Por favor introduza o novo valor da variável letra\n");
    scanf(" %c", &letra);
    printf("o valor de letra mudou para %c\n", letra);
    

}