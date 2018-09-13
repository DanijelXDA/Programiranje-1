// preklapanje imena funkcije
#include <iostream>

int operacija (int, int);
double operacija (double, double);

int main ()
{
  int x=5,y=2;
  std::cout << operacija (x,y) << '\n';

  double m=5.0,n=2.0;
  std::cout << operacija (m,n) << '\n';
  return 0;
}

int operacija (int a, int b)
{
  return (a*b);
}

double operacija (double a, double b)
{
  return (a/b);
}
