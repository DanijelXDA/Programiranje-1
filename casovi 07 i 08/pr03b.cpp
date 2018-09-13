// range-based for loop
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int niz[7] =  {10,5,8,6,12,9,4};
  for (auto x : niz)
  {
    cout << x << endl;
  }
  cout << endl;
}
