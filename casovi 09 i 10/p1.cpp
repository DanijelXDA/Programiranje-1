/* Izracunati zbir svih elemenata celobrojnog niza. */
/* Sve vrednosti u vezi sa nizom (broj elemenata,   */
/* elementi niza, zbir elemenata) realizovati kao   */
/* dinamicke promenljive.                           */


#include <iostream>

using namespace std;

int main(void)
{
    const int MAX = 20;      /* Definisanje najveceg broja elementa u nizu */

    int *n, *a, *zbir;

    n = new int;
    a = new int[MAX];
    zbir = new int;

    int i;          /* Promenljive u vezi sa indeksima niza. */
                    /* Ove promenljive su uvek celobrojne!!! */

    /* Odredjivanje broja elemenata u nizu */
    do{
        cout << "\n\nUnesite velicinu niza (max = " << MAX << "): ";
        cin >> *n;
    }while(*n<1 || *n>MAX);

    /* Ucitavanje elemenata niza, jedan po jedan */
    cout << "\n\nUnos elemenata niza:\n";
    for(i=0; i<*n; i++){
        cout << "\na[" << i << "] = ";
        cin >> a[i];
    }

    /* Sabiranje elemenata niza */
    *zbir = 0;
    for(i=0; i< *n; i++)
        *zbir += *(a + i);

    /* Prikaz rezultata */
    cout << "\n\nZbir iznosi: " << *zbir << endl;

    delete n;
    delete[] a;
    delete zbir;

    return 0;
}
