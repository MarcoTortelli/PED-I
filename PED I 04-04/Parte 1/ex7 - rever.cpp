#include <iostream>

using namespace std;

int main()
{
   int h, m, s, t;
   
   cout << "Digite o tempo em segundos";
	cin >> t;
	s = t % 60;
	m = ((t - s) / 60) % 60 ;
	h = ((t - m - s) / 3600) % 60; 
	cout << "Horas: " << h << " \nminutos: " << m << " \nsegundos: " << s; 

    return 0;
}
