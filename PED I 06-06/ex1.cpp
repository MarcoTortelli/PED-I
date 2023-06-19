#include <iostream>

using namespace std;

/*

1. Faça um programa que leia uma matriz 5 x 5 e a escreva.
Leia a seguir um número e escreva a soma da linha do número lido.

*/

main() {
    int num[5][5];
    bool cont = false;
    int pesq;
    int soma = 0;
    cout << "Digite os elementos da matriz: \n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> num[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Digite um numero: ";
    cin >> pesq;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (num[i][j] == pesq) {
                cont = true;
                for (int k = 0; k < 5; k++) {
                    soma += num[i][k];
                }
                break;
            }
        }
    }

    if (cont) {

        cout << "A soma da linha do numero e: " << soma << "\n";
    } else {
        cout << "Numero nao encontrado";
    }
}