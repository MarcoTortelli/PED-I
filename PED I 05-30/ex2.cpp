#include <iostream>
#include <string>

using namespace std;

/*

2. Fazer um programa que leia uma frase e escreva a quantidade de letras (sem espaço) que a mesma possui. Usar uma função para contar as letras.

*/

main() {
    int x = 0;
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] != ' ') {
            x++;
        }
    }

    cout << "A frase tem " << x << " letras";
}