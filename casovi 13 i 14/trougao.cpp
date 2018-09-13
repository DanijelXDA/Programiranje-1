// ispitivanje klase trouglova.
 #include "trougao.h"
 #include <iostream>
 using namespace std;
 int main ()
 {
 cout << "Broj trouglova? ";
 int n; cin >> n;
 Trougao *niz = new Trougao [n];
 int i;
 for (i=0; i<n; )
 {
    cout << i+1 << ". trougao? ";
    double a, b, c;
    cin >> a >> b >> c;
    if (Trougao::moze(a,b,c) )
        niz[i++].trougao (a, b, c);
    else
        cout << "*** Neprihvatljive stranice!"<<endl;
 }
 int j;
 for (i=0; i<n-1; i++)
    for (j=i+1; j<n; j++)
       if (niz[j].P() < niz[i].P() )
          { Trougao pom = niz[i];
            niz[i] = niz[j];
            niz[j]=pom;}
 cout << "\nUredjeni niz trouglova:"<<endl;
 for (i=0; i<n; i++)
 {
    cout << i+1 << ": ";
    niz[i].pisi();
    cout << " P= " << niz[i].P() << endl;
 }
 delete [] niz;
 return 0;
 }
