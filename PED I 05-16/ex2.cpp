#include <iostream>

using namespace std;

/*

Faça um programa que leia o nome de 10 funcionários e o seu respectivo salário. A seguir, escreva todos os nomes cujos funcionários ganham mais de R$ 1500,00

*/

main()
{
    int i;
    string n[10];
    float s[10];
    for (i = 0; i < 10; i++)
    {
        cout << "Digite o nome do funcionario: ";
        getline(cin, n[i]);
        cout << "Digite o salario do funcionario: ";
        cin >> s[i];
        cin.ignore();
    }
    cout << "Funcionarios que ganham mais de 1500: " << endl;
    for (i = 0; i < 10; i++)
    {
        if (s[i] > 1500)
        {

            cout << n[i] << " - R$" << s[i] << endl;
        }
    }
}
