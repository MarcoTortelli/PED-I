#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float v, d, vd;
    
    cout << "Digite o valor do produto ";
    cin >> v;
    cout << "Digite a porcetagem do desconto ";
    cin >> d;
    
    d = d / 100;
    vd = v * d;
    v = v - vd;
    
    cout << "O valor final foi: " << v;
    cout << "\nO valor do disconto foi: " << vd;
    
    

    return 0;
}
