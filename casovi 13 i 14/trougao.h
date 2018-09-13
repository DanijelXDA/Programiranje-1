// trougao.h - Definicija klase trouglova.
 #include <iostream>
 #include <cmath>
 #include <cstdlib>
 using namespace std;
 class Trougao
 {
 double a, b, c; // Stranice trougla.
 public:
 static bool moze (double a, double b, double c) // da li su stranice prihvatljive.
 { return a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b; }
// static - заједнички члан класе за све објекте дате класе (више детаља касније)

 void trougao (double aa, double bb, double cc) // Stvaranje trougla.
 {
    if (! moze (aa, bb, cc))
        exit (1);
    a=aa;
    b=bb;
    c=cc;
 }
 double uzmiA () const { return a;} // Dohvatanje stranica.
 double uzmiB () const { return b;}
 double uzmiC () const { return c;}
 double O () const { return a + b + c;} // Obim trougla.
 double P () const // Povrsina trougla.
 {
 double s=O()/2;
 return sqrt (s * (s-a) * (s-b) * (s-c) );
 }
 bool citaj () // citanje trougla
 {
 double aa, bb, cc;
 cin >> aa >> bb >> cc;
 if ( ! moze (aa, bb, cc) ) return false;
 else {
        a=aa;
        b=bb;
        c=cc;
        return true;}
 }
 void pisi () const // pisanje trougla.
 {
     cout << "Troug(" << a << ", " << b << ", "<< c << ')';
 }
 };
