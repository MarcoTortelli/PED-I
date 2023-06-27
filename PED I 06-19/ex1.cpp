#include <algorithm>
#include <iostream>
using namespace std;

/*

Faça um programa que leia 3 números e chame uma função com passagem de parâmetro por valor, que que recebe 3 números como parâmetro, os coloca em ordem crescente e os escreve. Escrever os números na função.

*/

void ordenarNumeros(int n1, int n2, int n3) {
    if (n1 > n2)
        swap(n1, n2);
    if (n2 > n3)
        swap(n2, n3);
    if (n1 > n2)
        swap(n1, n2);

    cout << n1 << " " << n2 << " " << n3 << " ";
}

int main() {
    int n1, n2, n3;
    cout << "Digite 3 numeros: ";

    cin >> n1 >> n2 >> n3;
    ordenarNumeros(n1, n2, n3);
    return 0;
}