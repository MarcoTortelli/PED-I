#include <iostream>

using namespace std;

/*

Faça um programa que fique lendo um número não conhecido de valores enquanto sua soma for inferior a 500 e fique escrevendo a quantidade de números digitados e a sua soma.

*/

main()
{
    int s = 0, n, q = 0;
    while (s < 500)
    {
        cout << "Digite um numero: ";
        cin >> n;
        s += n;
        cout << "Soma: " << s << endl;
        q++;
        cout << q << "x" << endl;
    }

}