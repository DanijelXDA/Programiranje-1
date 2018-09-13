#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cout << "Unesite jedan string (najmanje 10 znakova)" << endl;
    getline(cin, s, '\n');

    s.insert(4, "123456");

    cout << endl << "String sada izgleda:" << endl << s << endl;

    return 0;
}
