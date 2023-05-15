#include <iostream>

using namespace std;

/*

Faça um programa que leia um número e escreva a soma dos números de 1 até o número lido.

*/

main()
{
    int s;
    s = 0;
    int a;
    cout << "Digite um numero: ";
    cin >> a;
    for (int i = 0; i <= a; i++)
    {

        s += i;
    }
    cout << "Soma: " << s;
}