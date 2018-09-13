#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cout << "Unesite jedan string" << endl;
    getline(cin, s, '\n');

    cout << endl << "Uneli ste sledece znakove:" << endl;
    for(int i=0; i<s.length(); i++)
        cout << s[i];

    cout << endl << endl << "Uneli ste sledece znakove:" << endl;
    for(string::iterator i=s.begin(); i!=s.end(); i++)
        cout << *i;

    return 0;
}
