
#include <iostream>

using namespace std;

int
main ()
{
  int n1, n2, n3;
  double media;

  cin >> n1;
  cin >> n2;
  cin >> n3;
  if (n1 > n2 && n1 > n3)
    {
      cout << n1;
    }
  if (n2 > n1 && n2 > n3)
    {
      cout << n2;
    }
  if (n3 > n1 && n3 > n2)
    {
      cout << n3;
    }
    
  return 0;
}
