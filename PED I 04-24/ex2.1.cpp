#include <iostream>

using namespace std;

/*

2. Faça um programa que funcione como uma calculadora. Ele deve ler dois números  e a operação a ser feita com esses dois números: adição ( + ), subtração ( - ), multiplicação ( * ) e divisão ( / ). Após, imprimir o resultado do cálculo, observando que se a operação for divisão, o segundo operando não pode ser zero (imprima uma mensagem de erro informando o problema, se for o caso).

2.1 usando if ou if else
2.2 usando switch (se for possível)
2.3 usando o operador ternário ? : (se for possível)

*/

main(){
	string op;
	float a, b;
	cout << "Digite: \n(+) soma \n(-) subtracao \n(*) multiplicacao \n(/) divisao\n";
	cin >> op;	
	while(op != "+" && op != "-" && op != "*" && op != "/"){
		cout << "Digite um operador valido: ";
		cin >> op;
	}
	cout << "Digite o primeiro numero do calculo: ";
	cin >> a;
	cout << "Digite o segundo numero do calculo: ";
	cin >> b;
	if(op == "+"){
		a = a + b;
		cout << "Resultado: " << a;
	} else if(op == "-"){
		a = a - b;
		cout << "Resultado: " << a;
	} else if( op == "*"){
		a = a * b;
		cout << "Resultado: " << a;
	}  else if(op == "/" && b != 0){
		a = a / b;
		cout << "Resultado: " << a;
	} else {
		cout << "Nao se pode dividir por zero";
	}
	
	

}