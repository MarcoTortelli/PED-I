#include <iostream>
#include <cmath>
using namespace std;

/*

Faça um programa em C++ que leia um número e escreva se o mesmo é par ou ímpar

*/
int main (){
	int n;
	cin >> n;
	if(n % 2 == 0){
		cout << "Par";
	} else {
		cout << "Impar";
	}
}