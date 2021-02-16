#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {


    setlocale(LC_ALL, "");

    float a, b, media;
    //pedir valores e scanear
    printf("Digite o valor da primeira nota: \n");
    scanf("%f", &a);

    printf("Digite o valor da segunda nota: \n");
    scanf("%f",&b);
    
    //processar
    media = (a + b) / 2;

    //escrever o resultado
    printf("O valor da média das 2 notas eh de %.1f\n", media);

}