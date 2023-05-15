#include <iostream>

using namespace std;

/*

Faça um programa que escreva a soma dos números pares de 1 até 200

*/

main()
{
    int s = 0;
    for (int i = 0; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
    }
    cout << "Soma: " << s;
}