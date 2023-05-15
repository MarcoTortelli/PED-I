#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 números e escreva o maior e o menor número lido.

*/

main()
{
    int maior, menor, n;

    cout << "Digite 10 numeros: ";
    cin >> n;

    maior = n;
    menor = n;

    for (int i = 1; i < 10; i++)
    {
        cin >> n;
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
    }
    cout << "Menor: " << menor;
    cout << "\nMaior: " <<  maior;
}