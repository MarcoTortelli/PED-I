#include <iostream>
#include <string>

using namespace std;

/*

6. Fazer um programa que leia uma frase e converta somente a primeira letra para maiúscula e todas as demais para minúsculo.

*/

main() {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        if (i == 0) {
            frase[i] = toupper(frase[i]);
        } else {
            frase[i] = tolower(frase[i]);
        }
    }

    cout << "Frase formatada: " << frase;
}
