#include <stdio.h>
#include <stdlib.h>

void main () {
    //definindo variaveis
    int a = 6, b = 3;

    //soma
    printf("A soma de %d com %d eh %d\n",a ,b ,a + b);

    //subtração
    printf("A diferença de %d e %d eh %d\n",a ,b ,a - b);

    //divisão
    printf("A divisão de %d por %d eh %d\n",a ,b ,a / b);

    //multiplicação
    printf("A multiplicaçao de %d com %d eh %d\n",a ,b ,a * b);

    //resto da divisão
    printf("O resto da divisão de %d por %d eh %d\n",a ,b ,a % b);

    //valor absoluto
    printf("O valor absoluto de %d - %d eh %d\n",b ,a ,abs(b-a));


}