
#include <iostream>
using namespace std;

/*

4. Fazer um programa em C++ que leia a altura, o sexo (M - masculino e F - feminino) e o peso de uma pessoa, e escreva se ele está acima, abaixo ou no peso ideal, utilizando as seguintes fórmulas para o peso ideal:
- para homens: Peso ideal = (72.7 * altura) - 58
- para mulheres: Peso ideal = (62.1 * altura) - 44.7
Para estar no peso ideal, tolerar até 1Kg para mais e 1Kg para menos.

4.1 usando switch (se for possível)
4.2 usando o operador ternário ? : (se for possível)

*/

main()
{
    string s;
    double a, p, i;
    cout << "Digite o seu sexo M ou F ";
    cin >> s;
    cout << "Digite a altura em cm ";
    cin >> a;
    a = a / 100;
    cout << "Digite o peso em kg ";
    cin >> p;

    i = (s == "M") ? (72.7 * a) - 58 : (62.1 * a) - 44.7;
    cout << ((p > i + 1 || p < i - 1) ? "Voce esta no peso ideal com " + to_string(i) : "Voce nao esta no peso ideal");
}