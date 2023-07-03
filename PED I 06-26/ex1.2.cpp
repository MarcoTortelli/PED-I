#include <iostream>

using namespace std;

/*

2. Implemente o programa acima usando funções

*/

void depositar(double &saldo, double valor) {
    saldo += valor;
}

bool sacar(double &saldo, double limite, double valor) {
    if (valor > saldo + limite) {
        return false;
    } else {
        saldo -= valor;
        return true;
    }
}

void mostrarSaldo(double saldo) {
    cout << "Saldo atual: " << saldo << endl;
}

int main() {
    double saldo;
    double limite;
    double valor;
    int x;

    cout << "Digite o valor do limite de credito: ";
    cin >> limite;

    do {
        cout << "\n1 - Depositar\n2 - Sacar\n3 - Mostrar saldo\n0 - Sair\n";
        cin >> x;

        switch (x) {
        case 1:
            cout << "Digite o valor para depositar: ";
            cin >> valor;
            depositar(saldo, valor);
            break;
        case 2:
            cout << "Digite o valor do saque: ";
            cin >> valor;
            if (!sacar(saldo, limite, valor)) {
                cout << "Saldo insuficiente" << endl;
            }
            break;
        case 3:
            mostrarSaldo(saldo);
            break;
        case 0:
            break;
        }
    } while (x != 0);

    return 0;
}