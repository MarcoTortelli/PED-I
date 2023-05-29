#include <iostream>

using namespace std;

/*

A loja K. Gol vende os seguintes produtos:
1 - boné a R$ 10,00
2 - camiseta a R$ 20,00
3 - bermuda a R$ 25,00
4 - calção de banho a R$ 15,00
5 - maiô a R$ 40,00
6 - biquini a R$ 30,00
Faça um programa em C++ que fique lendo o código do produto e a quantidade até que seja digitado 0 para encerrar a compra. Quando encerrar a compra escrever o total a pagar e exibir novamente o menu para ficar pronto para realizar outra venda.

*/

main()
{

    int x, q;
    float t = 0.0;
    while (true)
    {

        while (true)
        {
            cout << "1 - bone a R$ 10,00 " << endl
                 << "2 - camiseta a R$ 20,00" << endl
                 << "3 - bermuda a R$ 25,00" << endl
                 << "4 - calcao de banho a R$ 15,00" << endl
                 << "5 - maio a R$ 40,00" << endl
                 << "6 - biquini a R$ 30,00" << endl;
            cout << "Codigo do produto: ";
            cin >> x;
            if (x == 0)
            {
                break;
            }
            cout << "Quantidade: ";
            cin >> q;
            switch (x)
            {
            case 1:
                t = t + 10.00 * q;
                break;
            case 2:
                t += 20.00 * q;
                break;
            case 3:
                t += 25.00 * q;
                break;
            case 4:
                t += 15.00 * q;
                break;
            case 5:
                t += 40.00 * q;
                break;
            case 6:
                t += 30.00 * q;
                break;
            default:
                cout << "Codigo invalido\n";
            }
        }
        cout << "Total a pagar: R$ " << t << endl;
        t = 0.0;
    }
}