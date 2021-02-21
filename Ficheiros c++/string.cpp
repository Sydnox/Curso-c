#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

//serve para quando não encontrar nas bibliotecas saber que é o std antes
using namespace std;

//função principal do programa
int main () {

    //definindo uma string
    string palavra;

    //escrever 
    cout << "Digite uma palavra ";

    // Ler a string
    cin >> palavra;

    //Escrever a string , o << serve também para separar/concatenar
    cout << "\n A palavra eh: " << palavra << "\n";
    
    return 0;

}