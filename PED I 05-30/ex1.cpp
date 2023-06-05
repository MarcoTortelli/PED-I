#include <iostream>
#include <string>

using namespace std;

/*

1. Fazer um programa que leia uma frase e escreva o tamanho da mesma.

*/

main() {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);
    cout << "A frase tem " << frase.length() << " caracteres";
}