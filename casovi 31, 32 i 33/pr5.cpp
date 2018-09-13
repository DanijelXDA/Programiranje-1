#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cout << "Unesite jedan string (najmanje 10 znakova)" << endl;
    getline(cin, s, '\n');

    s.erase(4, 3);

    cout << endl << "String sada izgleda:" << endl << s << endl;

    s.erase(0, s.length());

    cout << endl << "String sada izgleda:" << endl << s << endl;

    return 0;
}
