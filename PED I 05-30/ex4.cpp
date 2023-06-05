#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

/*

4. Fazer um programa que leia uma frase e retira os espaços em branco da mesma.

*/

main() {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);
    string frasefinal;
    for (int i = 0; i < frase.length(); i++) {
        char letra = frase[i];
        if (letra != ' ') {
            frasefinal += letra;
        }
    }
    cout << "Frase sem espacos: " << frasefinal << endl;
}