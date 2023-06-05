#include <iostream>
#include <string>

using namespace std;

/*

5. Fazer um programa que leia um nome e converta todo ele para maiúscula.

*/

main() {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        frase[i] = toupper(frase[i]);
    }
    
    cout << "Nome todo em maiuscula: " << endl
         << frase;
}