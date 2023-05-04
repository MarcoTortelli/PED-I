#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r, a, p;
    cout << "Digite o raio ";
    cin >> r;
    
    a = M_PI * pow(r, 2);
    p = 2 * M_PI * r;
    cout << "Area: " << a << endl;
    cout << "Perimetro: " << p;

    return 0;
}