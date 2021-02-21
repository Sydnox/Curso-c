#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main (){

    // Criando uma matriz

    int matriz[2][2] , i, j;

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //Escrever os valores no ecrã

    for(i=0; i < 2 ; i++){
        for(j=0; j<2 ; j++){
            cout << " " << matriz[i][j];
        }
        cout << "\n";
    }

    //ler Valores de matriz
    for(i=0; i < 2 ; i++){
        for(j=0; j<2 ; j++){
            //scanf("%d", &matriz[i][j]()
            cout << "Digite o novo valor de posicao (" << i << "," << j << "): ";
            cin >> matriz[i][j];
        }
    }

    //Escrever os novos valores no ecrã

    for(i=0; i < 2 ; i++){
        for(j=0; j<2 ; j++){
            cout << " " << matriz[i][j];
        }
        cout << "\n";
    }

    return 0;
}