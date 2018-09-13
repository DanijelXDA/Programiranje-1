// preklapanje imena funkcije
#include <iostream>
using namespace std;

int operacija (int a, int b)
{
  return (a*b);
}

double operacija (double a, double b)
{
  return (a/b);
}

int main ()
{
  int x=5,y=2;
  double m=5.0,n=2.0;
  cout << operacija (x,y) << '\n';
  cout << operacija (m,n) << '\n';
  return 0;
}
