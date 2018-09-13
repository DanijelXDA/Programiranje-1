// tacka.h definicija klase tacaka u ravni
 #include<cmath>
 #include<iostream>
 using namespace std;
 class Tacka
 {
    double x,y; // koordinate
    public:
    void tacka (double a, double b) //postavljanje koordinata, stvaranje tacke
       {x=a;y=b;}
    double aps() const {return x;} // dohvatanje apscise (x osa)
    double ord() const {return y;} // dohvatanje ordinate (y osa)
    double rastojanje(Tacka t) const // rastojanje do tacke
       { return sqrt(pow(x-t.x,2)+pow(y-t.y,2)); }
    void citaj() //citanje tacke
       {cin>>x>>y;}
    void pisi() const //pisanje tacke
       { cout<<'('<<x<<", "<<y<<')'; }
 };

