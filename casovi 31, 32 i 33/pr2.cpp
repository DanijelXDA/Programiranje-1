#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cout << "Unesite jedan string" << endl;
    getline(cin, s, '\n');
    cout << "Uneli ste:" << endl << s << endl;

    return 0;
}
