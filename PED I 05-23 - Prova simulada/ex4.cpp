#include <iostream>

using namespace std;

/*

Faça um programa que leia 10 notas de alunos e escreva as 3 maiores notas e as 3 menores notas.

*/

main()
{
    float n[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a nota do " << i + 1 << "o aluno: ";
        // n[i] = i;
        cin >> n[i];
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                swap(n[j], n[j + 1]);
            }
        }
    }
    cout << "\nMenores notas: ";
    for (int i = 0; i < 3; i++)
    {
        cout << n[i] << " ";
    }
    cout << "\nMenores notas: ";
    for (int i = 8; i < 10; i++)
    {
        cout << n[i] << " ";
    }
}