#include <iostream>

using namespace std;

/*

1. Faça um programa em C++ que leia dois número e escreva a diferença do maior pelo menor

1.1 usando if ou if else
1.2 usando switch (se for possível)
1.3 usando o operador ternário ? :

*/

main(){
	
	float a, b;
	cout << "Digite o primeiro numero: ";
	cin >> a;
	cout << "Digite o segundo numero: ";
	cin >> b;
	if(a > b){
		a = a - b;
	} else {
		a = b - a;
	}
	cout << "Maior pelo menor: " << a;
	
}