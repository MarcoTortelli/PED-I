#include <iostream>

using namespace std;

/*

Faça um programa que leia 20 números. A seguir, crie um menu com as opções:
1 - Mostrar todos: escreva todos os números
2 - Mostrar os pares: escreva todos os números pares
3 - Mostrar os ímpares: escreva todos os números ímpares
9 - Sair

*/

main()
{

    int n[20], i, x;
    for (i = 0; i < 20; i++)
    {
        // cout << "Digite o " << i << "o numero: ";
        // cin >> n[i];
        n[i] = i;
    }
    cout << "1 - Mostrar todos: escreva todos os numeros" << endl
         << "2 - Mostrar os pares: escreva todos os numeros pares" << endl
         << "3 - Mostrar os impares: escreva todos os numeros impares" << endl
         << "9 - Sair" << endl;
    cin >> x;
    while (x != 9)
    {
        switch (x)
        {
        case 1:
            for (i = 0; i < 20; i++)
            {
                cout << n[i] << " ";
            }
            break;
        case 2:
            for (i = 0; i < 20; i++)
            {
                if (n[i] % 2 == 0)
                {
                    cout << n[i] << " ";
                }
            }
            break;
        case 3:
            for (i = 0; i < 20; i++)
            {
                if (n[i] % 2 != 0)
                {
                    cout << n[i] << " ";
                }
            }
            break;
        case 9:
            return 0;
            break;

        default:
            cout << "Operador invalido";
            break;
        }

        cout << endl
             << "1 - Mostrar todos: escreva todos os numeros" << endl
             << "2 - Mostrar os pares: escreva todos os numeros pares" << endl
             << "3 - Mostrar os impares: escreva todos os numeros impares" << endl
             << "9 - Sair" << endl;
        cin >> x;
    }
}
