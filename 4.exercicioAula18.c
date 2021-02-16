#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {

    setlocale(LC_ALL, "");

    float a ,b ,modulo;

    printf("\nDigite o valor da primeira nota: ");
    //ler valor
    scanf("%f", &a);

    printf("\nDigite o valor da segunda nota: ");
    scanf("%f", &b);

    modulo = abs (a - b);
    printf("\no modulo da diferença entre as 2 notas é: %.2f", modulo);




}