#include <iostream>

using namespace std;

/*

O IPVA é a sigla de Imposto sobre a Propriedade de Veículos Automotores, um imposto estadual com o objetivo de arrecadação de impostos sobre os veículos.
O valor do IPVA no Rio Grande do Sul é calculado sobre o valor do veículo, de acordo com a tabela:
• 1 - Automóveis e caminhonetes: 3%
• 2 - Motocicletas: 2%
• 3 - Caminhões, micro-ônibus, ônibus e caminhonetes para locação: 1%
Faça um programa que leia o tipo de veículo (1, 2 ou 3) e o valor do mesmo e calcule e escreva o valor do IPVA, usando uma função.

*/
float calcularValorIPVA() {
    int tipoVeiculo;
    float valorVeiculo;
    cout << "1 - Automoveis e caminhonetes: 3%" << endl
         << "2 - Motocicletas: 2%" << endl
         << "3 - Caminhoes, micro-onibus, onibus e caminhonetes para locacao: 1%" << endl;
    cin >> tipoVeiculo;
    cout << "Digite o valor do veiculo: ";
    cin >> valorVeiculo;
    switch (tipoVeiculo) {
    case 1:
        cout << "Valor do IPVA: " << (valorVeiculo *= 0.03);
        break;
    case 2:
        cout << "Valor do IPVA: " << (valorVeiculo *= 0.02);
        break;
    case 3:
        cout << "Valor do IPVA: " << (valorVeiculo *= 0.01);
        break;
    default:
        cout << "Operador invalido" << endl;
        break;
    }

    return valorVeiculo;
};

int main() {
    calcularValorIPVA();
}
