#include <iostream>

using namespace std;

/*

Faça um programa que leia o número de horas trabalhadas num mês e o valor por hora. Caso a quantidade de horas trabalhadas exceda 220 horas, deve ser pago um adicional de 50% sobre o valor pago por hora (hora extra). Calcule e escreva o o valor do salário, das horas extras (se tiver) e o salário total.

*/

main()
{
    int numero_horas;
    float valor_hora;
    float hora_extra;
    float salario;
    float salario_total;
    cout << "Digite o numero de horas trabalhadas: ";
    cin >> numero_horas;

    cout << "Digite o valor por hora: ";
    cin >> valor_hora;

    if (numero_horas > 220)
    {
        hora_extra = numero_horas - 220;
        numero_horas -= hora_extra;
        hora_extra *= (valor_hora * 1.5);
        cout << "Valor horas extras: " << hora_extra;
    }
    salario = numero_horas * valor_hora;
    salario_total = salario + hora_extra;
    cout << "Salario total: " << salario_total << endl;
    cout << "Salario: " << salario << endl;
}