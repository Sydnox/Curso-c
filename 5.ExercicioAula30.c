#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    
    setlocale(LC_ALL, "");

    float a, b, c;

    printf("Por favor digite 3 valores:");
    scanf("%f %f %f", &a, &b, &c);

    if(a == b && a==c){
        printf("\nÉ um triângulo equilátero\n");
    }else {
        printf("\nNão é um triângulo equilátero\n");
    }



}