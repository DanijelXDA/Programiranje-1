// moj prvi string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mojstring;
  mojstring = "Ovo je prva vrednost stringa.";
  cout << mojstring << endl;
  mojstring += "Ovo je druga vrednost stringa.";
  cout << mojstring << endl;
  mojstring = mojstring +"je druga ";
  cout << mojstring << endl;
  return 0;
}
