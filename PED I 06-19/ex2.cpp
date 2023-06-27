#include <iostream>

using namespace std;

/*

Faça um programa que leia 3 números e os escreva em ordem crescente, usando uma função que que recebe 3 números como parâmetro por referência e os coloca em ordem crescente. Escrever os números no programa principal.

*/

void ordenarNumeros(int &n1, int &n2, int &n3) {
    if (n1 > n2)
        swap(n1, n2);
    if (n2 > n3)
        swap(n2, n3);
    if (n1 > n2)
        swap(n1, n2);
}

int main() {
    int n1, n2, n3;
    cout << "Digite 3 numeros: ";
    cin >> n1 >> n2 >> n3;
    ordenarNumeros(n1, n2, n3);
    cout << n1 << " " << n2 << " " << n3 << " ";
    return 0;
}