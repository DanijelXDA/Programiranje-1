// ispitivanje klase tacaka
 #include"tacka.h"
 #include<iostream>
 using namespace std;
 int main()
 {
    cout<<"t1? ";

    Tacka t1;
    t1.citaj(); //unosenje tacke t1 pomocu metode citaj

    cout<<"t2? ";
    double x,y;
    cin>>x>>y;

    Tacka t2;
    t2.tacka(x,y); // formiranje tacke t2 pomocu metode tacka

    cout<<"t1=";
    t1.pisi();

    cout<<", t2=("<<t2.aps()<<", "<<t2.ord()<<')'<<endl;
    // t1 pisemo pomocu metode pisi, t2 pisemo pomocu funkcije cout

    cout<<"rastojanje="<<t1.rastojanje(t2)<<endl;
    return 0;
 }
