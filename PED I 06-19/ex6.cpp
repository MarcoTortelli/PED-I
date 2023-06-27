#include <iostream>

using namespace std;

/*

O desconto do INSS sobre o salário do trabalhador é realizado de acordo com a faixa salarial:
- 7,5% até um salário mínimo (R$ 1.212,00)
- 9% para quem ganha entre R$ 1.212,01 e R$ 2.427,35
- 12% para quem ganha entre R$ 2.427,36 e R$ 3.641,03
- 14% para quem ganha entre R$ 3.641,04 e R$ 7.087,22 (teto)
- 0% acima de 7.087,22

Conhecendo as alíquotas, o desconto para o INSS deve ser calculado para cada faixa, tendo como valor máximo o salário de contribuição na faixa em que se encontra.

Entre cada parcela, o cálculo é feito considerando o máximo e o mínimo destas e a alíquota a ser aplicada.

Veja como fica o cálculo para um salário de R$ 3.000,00 como exemplo, que se encontra na terceira faixa:

1ª faixa salarial: 1.212,00 x 0,075 = 90,90
2ª faixa salarial: [2.427,35 - 1.212,00] x 0,09 = 1.215,35 x 0,09 = 109,38
Faixa que atinge o salário: [3.000,00 - 2.427,35] x 0,12 = 572,65 x 0,12 = 68,72
Total do INSS: 90,90 + 109,38 + 68,72 = 269,00
Salário líquido: 2.731,00

Faça um programa em C++ que leia o valor do salário e crie uma função para calcular o valor do desconto do INSS. No programa principal, escreva o salário, o desconto (calculado através da função) e o valor do salário líquido.

*/

double calcularINSS(double salario) {
    double desconto = 0;
    if (salario <= 1212.00) {
        desconto = salario * 0.075;
    } else if (salario <= 2427.35) {
        desconto = (1212.00 * 0.075) + ((salario - 1212.00) * 0.09);
    } else if (salario <= 3641.03) {
        desconto = (1212.00 * 0.075) + ((2427.35 - 1212.00) * 0.09) + ((salario - 2427.35) * 0.12);
    } else if (salario <= 7087.22) {
        desconto = (1212.00 * 0.075) + ((2427.35 - 1212.00) * 0.09) + ((3641.03 - 2427.35) * 0.12) + ((salario - 3641.03) * 0.14);
    }
    return desconto;
}

int main() {
    double salario, desconto, salarioLiquido;
    cout << "Digite o valor do salario: ";
    cin >> salario;
    desconto = calcularINSS(salario);
    salarioLiquido = salario - desconto;
    cout << "Salario: R$ " << salario << endl;
    cout << "Desconto INSS: R$ " << desconto << endl;
    cout << "Salario liquido: R$ " << salarioLiquido << endl;
    return 0;
}