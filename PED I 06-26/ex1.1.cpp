#include <iostream>

using namespace std;

/*

1. Faça um programa (sem função) que controle uma conta-corrente com limite de crédito de um único cliente, com as operações de abrir conta, depositar, sacar e mostrar saldo. Ao abir conta, ler o valor do limite de conta, que permitirá sacar de modo que a conta fique negativa até o limite.

*/

int main() {
    double saldo;
    double limite;
    double valor;
    int x;
    cout << "Digite  o valor do limite de credito: ";
    cin >> limite;
    do {
        cout << "\n1 - Depositar\n2 - Sacar\n3 - Mostrar saldo\n0 - Sair\n";
        cin >> x;
        switch (x) {
        case 1:
            cout << "Digite o valor para depositar: ";
            cin >> valor;
            saldo += valor;
            break;
        case 2:
            cout << "Digite o valor do saque: ";
            cin >> valor;
            if (valor < saldo + limite) {
                saldo -= valor;
            }
            break;
        case 3:
            cout << "Saldo atual: " << saldo << endl;
            break;
        case 0:
            break;
        }

    } while (x != 0);

    return 0;
}