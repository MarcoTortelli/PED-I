#include <iostream>

using namespace std;

/*

Faça um programa em C++ que leia o código, o nome e o total de vendas de um funcionário. Calcule o salário a receber do funcionário, sabendo que os funcionários recebem R$ 1200,00 por mês + uma comissão adicional de 3% sobre as vendas + vale alimentação de R$ 200,00.
Escreva o código, o nome e o salário total a receber.

*/

main(){
    float tv, s;
    string c, n;
    cout << "Digite o codigo do funcionario: ";
    cin >> c;
    cout << "Digite o nome do funcionario: ";
    cin >> n;
    cout << "Digite o total de vendas do funcionario: ";
    cin >> tv;

    tv = tv * 0.03;
    s = 1200 + tv + 200;

    cout << "Codigo: " << c << "\nNome: " << n << "\nSalario total: " << s;



}