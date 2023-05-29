#include <iostream>

using namespace std;

/*

Faça um programa que leia o número inicial, o número final e um número múltiplo e escreva os números desse intervalo que são múltiplos do número lido, juntamente com sua soma e a sua contagem (quantidade de números).

*/

main()
{
    int nInicial, nFinal, nMultiplo, x = 0, y = 0;
    cout << "Digite o numero inicial: ";
    cin >> nInicial;
    cout << "Digite o numero final: ";
    cin >> nFinal;
    cout << "Digite o numero multiplo: ";
    cin >> nMultiplo;
    cout << "Multiplos: ";

    for (int i = nInicial; i <= nFinal; i++)
    {
        x++;
        if (i % nMultiplo == 0)
        {
            cout << i << " ";
            y += i;
        }
    }
    cout << "\nContagem: " << x;
    cout << "\nSoma: " << y;
}