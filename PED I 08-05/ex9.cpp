#include <iostream>

using namespace std;

/*

Faça um programa que leia o número inicial e o número final e escreva a soma de todos os números do intervalo lido.

*/

main()
{
    int a, b, s = 0;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        s += i;
    }
    cout << "Soma: " << s;
}