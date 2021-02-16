#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");
    // definindo variaveis
    float a , b, c, resultado;
    
    //Pedir dados
    printf("Digite as 3 notas que deseja fazer a média:");
    scanf("%f %f %f", &a, &b, &c);

    resultado = (a + b + c) / 3;

    if (resultado >7){
        printf("O aluno foi aprovado\n");
    }else {
        printf("O aluno reprovou\n");
    }

}