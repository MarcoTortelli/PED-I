#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 números e escreva a sua soma.

*/

main()
{

    float t = 0.0, n;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << "o numero: ";
        cin >> n;
        t += n;
    }

    cout << "Soma: " << t;
}