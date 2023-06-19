#include <iostream>

using namespace std;

/*

3. Uma sala de aula possui 20 classes dispostas em 4 fileiras de 5 classes.
Faça um programa que leia a idade de cada um dos alunos da sala, informando 0 para a classe que não tem aluno. A seguir calcule e escreva a média de idade de cada uma das fileiras e a média de idade de todos os alunos.

*/

main() {
    int idades[4][5];
    int somaIdadeFileira[4] = {0};
    int somaIdadeTotal = 0;
    int alunosFileira[4] = {0};
    int alunosTotal = 0;
    cout << "Digite a idade dos alunos: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> idades[i][j];
            if (idades[i][j] != 0) {
                somaIdadeFileira[i] += idades[i][j];
                somaIdadeTotal += idades[i][j];
                alunosFileira[i]++;
                alunosTotal++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (alunosFileira[i] != 0) {
            float mediaIdadeFileira = (float)somaIdadeFileira[i] / alunosFileira[i];

            cout << "Media da fileira " << i + 1 << ": " << mediaIdadeFileira << endl;
        } else {
            cout << "Media da fileira " << i + 1 << ": 0" << endl;
        }
    }
    float mediaAlunosTotal = (float)somaIdadeTotal / alunosTotal;
    cout << "Media de idade total: " << mediaAlunosTotal << endl;
}