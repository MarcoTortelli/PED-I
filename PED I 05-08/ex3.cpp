#include <iostream>

using namespace std;

/*

Faça um programa que escreva os números de 1 a 50, juntamente com sua soma

*/

main()
{
    int s = 0;
    for (int i = 0; i <= 50; i++)
    {
        cout << i << " ";
        s += i;
    }
    cout << "Soma: " << s;
}