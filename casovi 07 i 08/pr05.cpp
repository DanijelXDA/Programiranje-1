// using namespace primer upotrebe
#include <iostream>

namespace prvi
{
  int x = 5;
}

namespace drugi
{
  double x = 3.1416;
}

int main () {
  {
    using namespace prvi;
    std::cout << x << '\n';
  }
  {
    using namespace drugi;
    std::cout << x << '\n';
  }
  return 0;
}
