#include <iostream>

using namespace std;

int main()
{
   	float h, r, t;
   	cout << "Digite a quantidade de hotdogs vendidos: ";
   	cin >> h;
   	cout << "Digite a quantidade de refris vendidos: ";
   	cin >> r;
   	
   	
   	t = h * 10 + r * 5;
   	
   	cout << "O valor total da venda foi: " << t;

    return 0;
}