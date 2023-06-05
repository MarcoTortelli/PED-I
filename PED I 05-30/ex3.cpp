#include <iostream>
#include <string>

using namespace std;

/*

3. Fazer um programa que leia uma frase e a escreva de trás para frente

*/

main() {
    string frase;
    cout << "Digite uma frase:" << endl;
    getline(cin, frase);
    cout << "Frase de tras para frente: ";
    for (int i = frase.length(); i >= 0; i--) {
        cout << frase[i];
    }
}