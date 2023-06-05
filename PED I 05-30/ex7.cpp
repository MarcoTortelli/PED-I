#include <iostream>
#include <string>

using namespace std;

/*

7. Fazer um programa que leia um nome e converta a primeira letra de cada palavra em maiúsculo e as demais em minúsculo.

*/

main() {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        if (i == 0 || frase[i -1] == ' ' ) {
            frase[i] = toupper(frase[i]);
        } else {
            frase[i] = tolower(frase[i]);
        }
    }

    cout << "Frase formatada: " << frase;
}
