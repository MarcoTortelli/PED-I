#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 números e escreva quantos são maiores e quantos são menores que 100.

*/

main()
{
    int a, maior = 0, menor = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << "o ";
        cin >> a;
        if (a > 100)
        {
            maior++;
        }
        else
        {
            menor++;
        }
    }
    cout << "Maiores que 100: " << maior << endl;
    cout << "Menores que 100: " << menor << endl;

}