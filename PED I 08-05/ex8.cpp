#include <iostream>

using namespace std;

/*

Faça um programa que leia o número inicial e o número final e escreva todos os números do intervalo lido.

*/

main(){
    int a, b;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
    }
    

}