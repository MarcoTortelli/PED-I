#include <iostream>

using namespace std;
/*

Faça um programa em C++ que leia dois número e escreva qual é o maior deles ou se são iguais

*/

int main (){
float n1, n2;
cin >> n1;
cin >> n2;

if (n1  == n2){
	cout << "Sao iguais"; 
} else {
	if (n1 < n2){
	cout << "Maior: " << n2;
	} else {
		cout << "Maior: " << n1;
	}
}
}