#include <iostream>

using namespace std;

/*

3. Faça o programa acima (com função) para controlar até 100 contas.

*/



struct Conta {
    double saldo;
    double limite;
};

void depositar(Conta &conta, double valor) {
    conta.saldo += valor;
}

bool sacar(Conta &conta, double valor) {
    if (valor > conta.saldo + conta.limite) {
        return false;
    } else {
        conta.saldo -= valor;
        return true;
    }
}

void mostrarSaldo(Conta &conta) {
    cout << "Saldo atual: " << conta.saldo << endl;
}

int main() {
    Conta contas[100] = {{0}};
    double valor;
    int x;
    int numConta;

    cout << "Digite o número da conta (0 a " << 100 - 1 << "): ";
    cin >> numConta;

    if (numConta < 0 || numConta >= 100) {
        cout << "Numero de conta invalido!\n";
        return 1;
    }

    cout << "Digite o valor do limite de credito: ";
    cin >> contas[numConta].limite;

    do {
        cout << "\n1 - Depositar\n2 - Sacar\n3 - Mostrar saldo\n4 - Trocar de conta\n0 - Sair\n";
        cin >> x;

        switch (x) {
        case 1:
            cout << "Digite o valor para depositar: ";
            cin >> valor;
            depositar(contas[numConta], valor);
            break;
        case 2:
            cout << "Digite o valor do saque: ";
            cin >> valor;
            if (!sacar(contas[numConta], valor)) {
                cout << "Saldo insuficiente!\n";
            }
            break;
        case 3:
            mostrarSaldo(contas[numConta]);
            break;
        case 4:
            cout << "Digite o numero da conta (0 a " << 100 - 1 << "): ";
            cin >> numConta;

            if (numConta < 0 || numConta >= 100) {
                cout << "Número de conta invalido!\n";
                return 1;
            }

            cout << "Digite o valor do limite de credito: ";
            cin >> contas[numConta].limite;
            break;
        case 0:
            break;
        }
    } while (x != 0);

    return 0;
}
