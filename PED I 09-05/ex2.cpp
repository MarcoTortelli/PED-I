#include <iostream>

using namespace std;

/*

Faça um programa em C++ para calcular a conta de água. O custo da água varia dependendo se o consumidor é residencial, comercial ou industrial. A regra para calcular a conta é:
Residencial: R$ 20,00 de taxa mais R$ 0,50 por m3 gasto;
Comercial: taxa mínima de R$ 50,00 com direito a um consumo de até 50 m3 , mais R$ 0,30 por m3 gastos além dos 50m3.
Industrial: taxa mínima de R$ 80,00 com direito a um consume de 100 m3,  mais R$ 0,40 por m3 gastos além dos 100m3.
O programa deverá ler o tipo de consumidor (1- Residencial, 2-Comercial, 3-Industrial e o consumo de água em metros cúbicos (m3) e deverá escrever o valor em reais a ser pago pelo cliente.

*/

main()
{
    float c;
    int x;
    cout << "1 - Residencial\n2 - Comercial\n3 - Industrial\n";
    cin >> x;
    cout << "Consumo da agua em metros cubicos: ";
    cin >> c;

    switch (x)
    {
    case 1:
        c = (c * 0.5) + 20;
        break;
    case 2:
        if (c > 50)
        {
            c = ((c - 50) * 0.3) + 50;
        }

        break;
    case 3:
        if (c > 100)
        {
            c = ((c - 100) * 0.4) + 80;
        }
        break;
    default:
        cout << "Operador invalido";
        break;
    }
    cout << "Total a se pagar: R$" << c;
}