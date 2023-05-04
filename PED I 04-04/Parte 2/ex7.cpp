#include <iostream>

using namespace std;

int main()
{
   float r, d, e;
   cout << "Digite o valor do produto em reais: ";
   cin >> r;
   cout << "Digite o valor da cotacao do dolar: ";
   cin >> d;
   cout << "Digite o valor da cotacao do euro: ";
   cin >> e;
   
   
   d = r * d;
   e = r * e;
   cout << "O valor em dolar: " << d << endl;
   cout << "O valor em euro: " << e ;
   

    return 0;
}