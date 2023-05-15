#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 números e escreva quantos são menores que 50, quantos são de 50 a 69, quantos são de 70 a 100 e quantos são maiores que 100.

*/

main()
{
    int a, m = 0, c = 0, s = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite o " << i << "o ";
        cin >> a;
        if (a < 50)
        {
            m++;
        }
        else if (a >= 50 && a < 70)
        {
            c++;
        }
        else if (a >= 70 && a <= 100)
        {
            s++;
        }
    }
    cout << "Menores que 50: " << m << endl;
    cout << "De 50 a 69: " << c << endl;
    cout << "De 70 a 100: " << s << endl;
}