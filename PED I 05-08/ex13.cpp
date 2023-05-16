#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 números e conte e escreva quantos são pares e quantos são ímpares.

*/

main()
{
    int a, npar = 0, nimpar = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite o numero " << i << ": ";
        cin >> a;
        if (a % 2 == 0)
        {
            npar++;
        }
        else
        {
            nimpar++;
        }
    }
    cout << "Pares: " << npar << endl;
    cout << "Impares: " << nimpar << endl;
}
