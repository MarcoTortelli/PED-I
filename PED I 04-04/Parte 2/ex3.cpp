#include <iostream>

using namespace std;

int main()
{
    float v, p;
    cout << "Digite o valor da venda";
    cin >> v;
    cout << "Digite a porcentagem da comissao";
    cin >> p;
    
    p = (p/100) * v;	
    
    cout << "O valor da comissao: " << p;
    
    

    return 0;
}