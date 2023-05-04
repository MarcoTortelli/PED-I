
#include <iostream>

using namespace std;

int
main (){
	float a, b, c, m;
	
	cout << "Digite o primeiro numero ";
	cin >> a;
	cout << "Digite o segundo numero "; 
	cin >> b;
	cout << "Digite o terceiro numero ";
	cin >> c;
	
	m = (a + b + c) / 3.0;
	
	cout << "media: " << m;

  return 0;
}
