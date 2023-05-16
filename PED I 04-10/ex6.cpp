#include <iostream>

using namespace std;

/*

Um ano bissexto é aquele que possui um dia a mais que um ano habitual de 365 dias, ou seja, um ano bissexto tem 366 dias. No calendário, a diferença entre um ano normal e um bissexto pode ser verificada no mês de fevereiro, que tem 29 dias e não 28.
Faça um programa que leia um ano e escreva se o mesmo é bissexto ou não. 
Um ano é bissexto quando ele é múltiplo de 4 mas não é múltiplo de 100.
Se for múltiplo de 100 tem que ser múltiplo de 400 também.

*/
int main (){
	int n;
	cin >> n;
	if (n % 4 == 0 && n % 100 != 0){
		cout << "Bissexto";
	} else {
		cout << "ano normal";
	}
}