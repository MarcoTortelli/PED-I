#include <iostream>

using namespace std;

/*

Dois números são múltiplos entre si se na divisão do maior pelo menor o resto for 0. Faça um programa que leia 2 valores e escreva se os mesmos são múltiplos entre si ou não.

*/

int main (){
	int a, b, c;
	
	cin >> a;
	cin >> b;
	
	if ( a % b == 0){
		cout << "Sao multiplos";
	} else {
		cout << "Nao sao multiplos";
	}
}