// range-based for loop
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string str ="Zdravo!!!";
  for (char c : str)
  {
    std::cout << "[" << c << "]";
  }
  std::cout << '\n';
}
