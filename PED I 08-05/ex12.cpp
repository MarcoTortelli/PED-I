#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 números e escreva a soma dos mesmos.

*/

main()
{
    int i, a, s = 0;
    for (i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << "o ";
        cin >> a;
        s += a;
    }
    cout << "Soma: " << s;
}