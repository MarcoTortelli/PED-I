#include <iostream>

using namespace std;

/*

3. Faça um programa que leia o valor de uma venda e escolha a forma de pagamento:
- 1: à vista com 10% de desconto
- 2: em 3x sem juros
- 3: em 10x com acréscimo de 10% no valor da venda
Escreva o valor total a pagar e o valor de cada parcela, se for escolhida a opção 2 ou 3.

3.1 usando if ou if else
3.2 usando switch (se for possível)
3.3 usando o operador ternário ? : (se for possível)

*/

main()
{
    int x;
    float a;
    cout << "- 1: a vista com 10% de desconto\n- 2: em 3x sem juros\n- 3: em 10x com acrescimo de 10% no valor da venda\n";
    cin >> x;
    while (x != 1 && x != 2 && x != 3)
    {
        cout << "Digite um operador valido: ";
        cin >> x;
    }
    cout << "Digite o valor da venda: ";

    cin >> a;
    a = (x == 1)   ? a * 0.9
        : (x == 2) ? a
        : (x == 3) ? a * 1.1
                   : 0;
    cout << "O valor total: " << a;

    a = (x == 2)   ? a / 3
        : (x == 3) ? a / 10
                   : 0;

    cout << "\nO valor de cada parcela: " << a;
    return 0;
}