#include <iostream>

using namespace std;

int main()
{
   	float t;
   	cout << "Digite a temperatura em Celsius: ";
   	cin >> t;
   	
   	t = t * 1.8 + 32;
   	cout << "Temperatura em fahrenheit: " << t;
    return 0;
}