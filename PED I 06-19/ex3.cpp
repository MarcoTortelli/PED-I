#include <iomanip>
#include <iostream>
using namespace std;

/*

A KXorro QuemT vende hotdog a R$ 10,00 e refri a R$ 5,00. Faça um programa que leia a quantidade de hotdog e de refri vendidos e calcule e escreva o valor total da venda, utilizando uma função.

*/
void calcularVenda(int quantidadeHotDog, float valorHotDog, int quantidadeRefri, float valorRefri) {
    float valorTotal;
    valorTotal = (quantidadeHotDog * valorHotDog) + (quantidadeRefri * valorRefri);
    cout << "O valor total da venda foi: R$" << setprecision(2) << valorTotal;
}

int main() {
    int qHotdog, qRefri;

    cout << "Escreva a quantidade de HotDogs e refris vendidos: ";
    cin >> qHotdog >> qRefri;
    calcularVenda(qHotdog, 10, qRefri, 5);
    return 0;
}