#include <iostream>

using namespace std;

/*

Faça um programa que leia o número inicial e o número final e o número múltiplo e escreva todos os números do intervalo, que são múltiplos do número lido.

*/

main()
{
    int a, b, c;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o numero multiplo: ";
    cin >> c;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << " ";
        }
    }
}