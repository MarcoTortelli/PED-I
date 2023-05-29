#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*

Faça um programa que leia o nome de 10 funcionários e o seu respectivo salário. A seguir, leia um nome ou parte do nome a pesquisar e escreva o(s) nome do(s) funcionários com o respectivo salário.

*/

main()
{
    string n[10];
    float s[10];
    string b;
    bool x = false;
    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o nome do funcionario: ";
        getline(cin, n[i]);
        cout << "Digite o salario do funcionario: ";
        cin >> s[i];
        cin.ignore();
    }
    cout << "Digite o nome para pesquisar: ";
    getline(cin, b);

    for (int i = 0; i < 10; i++)
    {
        if (n[i].find(b) != string::npos)
        {
            cout << n[i] << ", R$ " << s[i] << endl;
            x = true;
        }
    }

    if (!x)
    {
        cout << "Funcionario nao encontrado";
    }
}
