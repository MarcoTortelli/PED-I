#include <iostream>

using namespace std;
/*

Faça um programa em C++ que leia dois números e escreva a diferença do maior pelo menor

*/


int main (){
	float n1, n2;
	cin >> n1;
	cin >> n2;
	
	if(n1 > n2){
		cout << n1 - n2;
	} else {
		cout << n2 - n1;
	}
	
}