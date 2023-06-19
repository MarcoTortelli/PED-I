#include <iostream>

using namespace std;

/*

4. Uma casa de shows colocou 20 mesas à venda para uma apresentação e precisa de um sistema de reserva de mesas. As mesas estão nesta disposição:
MesaLivre  MesaLivre  MesaLivre  MesaLivre  MesaLivre
MesaLivre  MesaLivre  MesaLivre  MesaLivre  MesaLivre
MesaLivre  MesaLivre  MesaLivre  MesaLivre  MesaLivre
MesaLivre  MesaLivre  MesaLivre  MesaLivre  MesaLivre
Faça um programa com um menu com as seguintes opções:
1 - Mostrar as Mesas: mostrar as mesas com a informação MesaLivre ou com o nome de quem fez a reserva
2 - Reservar mesa: ler a linha e coluna da mesa e verificar se a mesa está disponível ou não. Caso esteja livre, ler o nome e fazer a reserva.
3 - Sair.

*/

main() {
    string mesas[4][5];
    int x;
    int l, c;
    string nome;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            mesas[i][j] = "MesaLivre";
        }
    }

    do {
        cout << "1 - Mostrar as mesas \n2 - Reservar mesa\n3 - Sair\n";
        cin >> x;
        switch (x) {
        case 1:
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    cout << mesas[i][j] << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            cout << "Digite a linha(1 a 4) e a coluna(1 a 5) da mesa: ";
            cin >> l >> c;
            l -= 1;
            c -= 1;
            if (l >= 0 && l <= 3 && c >= 0 && c <= 4) {
                if (mesas[l][c] == "MesaLivre") {
                    cout << "Digite o nome: ";
                    cin.ignore();
                    getline(cin, nome);
                    mesas[l][c] = nome;
                    cout << "Mesa reservada" << endl;
                } else {
                    cout << "Mesa ja esta reservada" << endl;
                }

            } else {
                cout << "Posicao invalida" << endl;
            }

            break;
        case 3:
            break;
        default:
            cout << "Opcao invalida!" << endl;
        }
    } while (x != 3);
}
