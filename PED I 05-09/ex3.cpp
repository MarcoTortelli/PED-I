#include <iostream>

using namespace std;

/*

Faça um programa que leia o número inicial e o número final e calcule e escreva:
a) Todos os números entre o inicial e o final, juntamente com sua soma
b) A soma de todos os números múltiplos de 2 entre o inicial e o final
c) A soma de todos os números múltiplos de 3 entre o inicial e o final

*/

main()
{
    int a, b, s = 0, m2 = 0, m3 = 0;
    cout << "Digite o numero inicial: ";
    cin >> a;
    cout << "Digite o numero final: ";
    cin >> b;
    cout << "Numeros: ";
    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
        s += i;
        if (i % 2 == 0)
        {
            m2 += i;
        }
        if (i % 3 == 0)
        {
            m3 += i;
        }
    }
    cout << endl
         << "Soma de todos os numeros: " << s << endl
         << "Soma de todos os numeros multiplos de 2: " << m2 << endl
         << "Soma de todos os numeros multiplos de 3: " << m3;
}