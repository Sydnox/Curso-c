#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main (){


    /*preencher uma matriz 2x2 lendo valores do usuário e depois troque os valores entre a primeira
    e segunda linha */

    int matriz[2][2] , i ,j;

    //leitura dos valores
    for(i = 0 ;i < 2; i++){
        for(j = 0; j < 2; j++){
            cout << "Digite o valor de posicao (" << i << "," << j << "): ";
            cin >> matriz[i][j];
        }
    }
    
    //escrevendo a matriz com as linhas trocadas

    for (i=1 ; i>= 0 ; i--){
        for(j = 0; j < 2 ; j++){
            cout << " " << matriz[i][j];
        }
        cout << "\n";
    }

return 0;

}