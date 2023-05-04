#include <iostream>

using namespace std;

/*

A média da disciplina será calculada com a seguinte fórmula:
     Nota 1º Bimestre: Prova 1 (6 pontos) + Atividades 1 (4 pontos)
     Nota 2º Bimestre: Prova 2 (6 pontos) + Atividades 2 (4 pontos)
     Média: (Nota1 + Nota2) / 2
Para ser aprovado sem exame, a média deve ser maior ou igual a 7.
Faça um programa em C++ que leia as notas das provas e das atividades e calcule e escreva a média final do aluno e a mensagem se o mesmo está aprovado ou se está em exame.
*/

int main (){
	float p1, t1, p2, t2, m;
	cout << "Prova 1 ";
	cin >> p1;
	while (p1 > 6.0){
		cout << "Prova 1 ";
		cin >> p1;
	}
	cout << "Trabalho 1 ";
	cin >> t1;
	
		while (t1 > 4.0){
		cout << "Trabalho 1 ";
		cin >> t1;
	}
	cout << "Prova 2 ";
	cin >> p2;
	
		while (p2 > 6.0){
		cout << "Prova 2 ";
		cin >> p2;
	}
	cout << "Trabalho 2 ";
	cin >> t2;
	
		while (t2 > 4.0){
		cout << "Trabalho 2 ";
		cin >> t2;
	}
	m = (t1 + t2 + p1 + p2) / 2.0;
	
	if (m >= 7){
		cout << "\nAprovado com media " << m;
	} else {
		cout << "\nEm exame com media " << m;
	}
	
}