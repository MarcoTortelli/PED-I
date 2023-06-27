#include <iostream>

using namespace std;

/*

Fazer um programa em C++ que leia a altura, o sexo (M - masculino e F - feminino) e o peso de uma pessoa, e, utilizando uma função, escreva se ele está acima, abaixo ou no peso ideal, utilizando as seguintes fórmulas para o peso ideal:
- para homens: Peso ideal = (72.7 * altura) - 58
- para mulheres: Peso ideal = (62.1 * altura) - 44.7
Para estar no peso ideal, tolerar até 1Kg para mais e 1Kg para menos.
A função deve receber como parâmetros a altura, o sexo e o peso de uma pessoa e retornar -1 se estiver abaixo do peso, 0 se estiver no peso ideal ou 1 se estiver acima do peso. Escrever a informação no programa principal.

*/
void lerParametros(double &altura, char &sexo, double &peso) {
    do {
        cout << "Digite o seu sexo (M ou F): ";
        cin >> sexo;
    } while (sexo != 'M' && sexo != 'F');
    cout << "Digite a altura em m: ";
    cin >> altura;
    cout << "Digite o peso em kg: ";
    cin >> peso;
}

int calcularPesoIdeal(double altura, char sexo, double peso) {
    double pesoIdeal;
    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        cout << "Sexo inválido!" << endl;
        return 404;
    }

    if (peso < pesoIdeal - 1) {
        return -1;
    } else if (peso > pesoIdeal + 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char sexo;
    double altura, peso;
    lerParametros(altura, sexo, peso);
    int x = calcularPesoIdeal(altura, sexo, peso);

    switch (x) {
    case -1:
        cout << "Abaixo do peso";
        break;
    case 0:
        cout << "Peso ideal";
        break;
    case 1:
        cout << "Acima do peso";
        break;
    }
}