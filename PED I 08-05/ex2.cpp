#include <iostream>

using namespace std;

/*

Faça um programa que escreva a soma os números de 1 a 10

*/

main()
{
    int s;
    s = 0;
    for (int i = 0; i <= 10; i++)
    {

        s += i;
    }
    cout <<  "Soma: " << s;
}