#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string sifra;

    cout << "Unesite sifru" << endl;
    getline(cin, sifra, '\n');

    if(sifra == "123456")
        cout << endl << "Pristup je dozvoljen!" << endl;
    else
        cout << endl << "Pristup nije dozvoljen!" << endl;

    return 0;
}
