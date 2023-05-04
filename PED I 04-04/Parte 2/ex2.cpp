#include <iostream>

using namespace std;

int main()
{
    float h, v, s;
    
    cout << "Digite as horas trabalhadas ";
    cin >> h;
    cout << "Digite o valor pago por hora ";
    cin >> v;
    
    s = h * v;
    
    cout << "O salario do trabalhador: " << s;

    return 0;
}