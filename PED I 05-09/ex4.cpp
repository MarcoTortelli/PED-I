#include <iostream>

using namespace std;

/*

A média da disciplina será calculada com a seguinte fórmula:
     Nota 1º Bimestre: Prova 1 (6 pontos) + Atividades 1 (4 pontos)
     Nota 2º Bimestre: Prova 2 (6 pontos) + Atividades 2 (4 pontos)
     Média: (Nota1 + Nota2) / 2
Faça um programa em C++ que leia as notas das provas e das atividades e calcule e escreva a média final do aluno, aceitando somente valores válidos para as provas (0 a 6) e para as atividades (0 a 4). Caso a nota não esteja no intervalo, exibir uma mensagem e ler novamente a nota.

*/

main()
{
    float p1, t1, p2, t2, m;
    do
    {
        cout << "Digite a nota da prova 1: ";
        cin >> p1;
    } while (p1 > 6 || p1 < 0);
    do
    {
        cout << "Digite a nota do trabalho 1: ";
        cin >> t1;
    } while (t1 > 4 || t1 < 0);
    do
    {
        cout << "Digite a nota da prova 2: ";
        cin >> p2;
    } while (p2 > 6 || p2 < 0);
    do
    {
        cout << "Digite a nota do trabalho 2: ";
        cin >> t2;
    } while (t2 > 4 || t2 < 0);

    m = (p1 + t1 + p2 + t2) / 2;
    
    cout << "Media final do aluno: " << m;

}