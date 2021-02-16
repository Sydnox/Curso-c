#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {

    setlocale(LC_ALL, "");

    int a, b, c, resultado;
    printf("Digite por favor os 3 valores que deseja multiplicar:");
    // le o valor das 3 variaveis
    scanf("%d %d %d", &a, &b, &c);

    resultado = a * b * c;

    printf("\nO resultado da multiplicação dos 3 valores é : %d",resultado);
}