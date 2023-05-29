#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*

Faça um programa que leia o nome de 10 funcionários e o seu respectivo salário. A seguir, escreva os nomes em ordem alfabética com seu respectivo salário

*/
main()
{
    string n[10];
    float s[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o nome do funcionario: ";

        getline(cin, n[i]);
        cout << "Digite o salario do funcionario: ";
        cin >> s[i];
        cin.ignore();
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                swap(n[j], n[j + 1]);
                swap(s[j], s[j + 1]);
            }
        }
    }

    cout << "Funcionarios em ordem alfabetica:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << n[i] << ": R$" << s[i] << endl;
    }

    return 0;
}