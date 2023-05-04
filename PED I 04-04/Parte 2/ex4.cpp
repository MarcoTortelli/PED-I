#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n;
    cout << "Digite um numero: ";
    cin >> n;
    
   	cout <<"Dobro: " << n * 2 << endl;
   	cout <<"Metade: " << n / 2 << endl;
   	cout <<"Triplo: " <<  n * 3 << endl;
	cout <<"Terca parte: " <<  n / 3 << endl;
   	cout <<"Quadrado: " <<  pow(n, 2) << endl;
   	cout <<"Raiz quadrada: " << sqrt(n) << endl;

    return 0;
}