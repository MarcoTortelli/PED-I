#include <iostream>

using namespace std;

/*

O IMC é usado para avaliar o índice de massa corporal e definir se a pessoa está ou não no peso ideal. Ele é calculado pela fórmula:
IMC = peso / altura 2
- abaixo do peso ideal se o IMC for inferior a 18.5
- no peso ideal se IMC for maior ou igual a 18.5 e menor que 25
- acima do peso ideal se o IMC for maior ou igual a 25
Faça um programa em C++ que leia o peso e a altura de uma pessoa e calcule e escreva o IMC, com a informação se está no peso ideal, acima ou abaixo do peso.

*/
int main (){
	double a, p, i;
	cout << "Digite a altura em cm ";
	cin >> a;
	a = a / 100;
	cout << "Digite o peso em kg ";
	cin >> p;
	i = p / (a * a);
	
	if (i < 18.5){
		cout << "Abaixo do peso ideal";
	} 
	if (i >= 18.5 && i < 25){
		cout << "No peso ideal";
	}
	if(i >= 25){
		cout << "Acima do peso ideal";
	}
	

}