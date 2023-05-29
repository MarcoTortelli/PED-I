#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*

O time de voleibol da escola está selecionando os 6 novos jogadores (4 atacantes e 2 levantadores) que farão parte da equipe.
Faça um programa em C++ que leia o nome e a altura de 10 jogadores e escreva ao final o nome e a altura dos 4 jogadores mais altos que serão os atacantes e o
nome e a altura dos 2 jogadores mais baixos que serão os levantadores.

*/

main()
{
    string n[10];
    float a[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o nome do jogador: ";
        getline(cin, n[i]);
        cout << "Digite a altura do jogador em m: ";
        cin >> a[i];
        cin.ignore();
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            swap(a[j], a[j + 1]);
            swap(n[j], n[j + 1]);
        }
    }
    cout << "Atacantes mais altos:" << endl;
    for (int i = 6; i < 10; i++)
    {
        cout << "Nome: " << n[i] << ", Altura: " << a[i] << "m" << endl;
    }
    cout << "Levantadores mais baixos:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Nome: " << n[i] << ", Altura: " << a[i] << "m" << endl;
    }
}