#include <iostream>
using namespace std;

int main()
{
    float h, m, s, n;
    cout << "Digite a quantidade de horas";
    cin >> h;
    cout << "Digite a quantidade de minutos";
    cin >> m;
    cout << "Digite a quantidade de segundos";
    cin >> s;
    
    h = h * 3600;
    m = m * 60;
    s = s + m + h;
    
    cout << "O tempo total em segundos: " << s;
    
    return 0;
}
