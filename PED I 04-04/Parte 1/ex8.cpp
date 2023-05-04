#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double b, l, h;
  cout << "Digite um lado: ";
  cin >> b;
  cout << "Digite outro lado: ";
  cin >> l;
  
  h = sqrt((pow(b,2) + pow(l,2)));
  cout << "A diagonal: " << h;

    return 0;
}
