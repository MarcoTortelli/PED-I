#include <iostream>

using namespace std;

/*

O Mercadinho do Zeca Gado precisa de um programa que fique lendo a quantidade e o preço dos produtos até que seja informado a quantidade zero. No final o programa deve informar o total a ser pago e perguntar a forma de pagamento. As opções da forma de pagamento são: 1) A vista; 2) A prazo em 3 vezes. Se a opção escolhida for a vista, então o programa informa o valor da compra com um desconto de 5%. Caso a compra seja a prazo o programa deve informar o valor de cada parcela.

*/
main()
{
    int q, x;
    float p, v = 0;
    do
    {
        cout << "Digite a quantidade: ";
        cin >> q;
        if (q != 0)
        {
            cout << "Digite o preco: ";
            cin >> p;
        }
        v += q * p;
    } while (q != 0);

    cout << "1) A vista " << endl
         << "2) A prazo em 3 vezes" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        v = v * 0.95;
        cout << "Valor total: " << v;
        break;
    case 2:
        v = v / 3;
        cout << "Valor de cada parcela: " << v;
        break;
    default:
        cout << "Operador invalido";
        break;
    }
}