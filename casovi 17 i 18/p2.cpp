#include <iostream>
#include <cmath>

using namespace std;

class PravougliTrougao{
private:
    double a, b;
public:
    PravougliTrougao()//Ovo je prvi konstruktor:
            //1) Konstruktor nema tip povratne vrednosti! U tom slucaju je void!!!
            //2) Ime mora biti isto kao i klase (u nasem slucaju PravougliTroguao)
    {
        a = 0;
        b = 0;
    }
    PravougliTrougao(double x, double y)//Ovo je drugi konstruktor
                                        //ove parametre predajemo prilikom
                                        //stvaranja objekta u funkciji main
    {
        a = x;
        b = y;
    }
    void setPravougliTrougao(double X, double Y) // pomocu ove metode mozemo da
                               // izmenimo pocetne vrednosti promenljivih,
                               // a koje je postavio konstruktor
    {
        a = X;
        b = Y;
        return;
    }
    void getPravougliTrougao() //prikaz vrednosti objekta na ekranu
    {
        cout << endl << "Prva kateta  a = " << a << endl;
        cout << "Druga kateta b = " << b << endl << endl;
        return;
    }
    double obim() // izracunava i prikazuje obim pravouglog trougla
    {
        return a + b + hipotenuza() ;
    }
    double povrsina() // izracunava i prikazuje povrsinu pravouglog trougla
    {
        return 0.5 * a * b;
    }
    double hipotenuza() // izracunava i prikazuje duzinu hipotenuze pravouglog trougla
    {
        return sqrt(a*a+b*b);
    }
    void uglovi() // izracunava i prikazuje uglove pravouglog trougla
    {
        cout << endl << "Ugao alfa iznosi " << asin(a/sqrt(a*a+b*b));
        cout << " radijana, odnosno " << asin(a/sqrt(a*a+b*b))*180/3.14159;
        cout << " stepeni." << endl;

        cout << endl << "Ugao beta iznosi " << asin(b/sqrt(a*a+b*b)) ;
        cout << " radijana, odnosno " << asin(b/sqrt(a*a+b*b))*180/3.14159;
        cout << " stepeni." << endl;
        return;
    }
};


int main(void)
{
    PravougliTrougao obj1(30,40), obj2;
    double prvaKateta, drugaKateta;

    cout << "Stvorena su dva objekta:" << endl << endl;
    obj1.getPravougliTrougao();
    obj2.getPravougliTrougao();

    cout << endl << "Izmenite podatke za drugi objekat:" << endl << endl;
    cout << endl << "Unesite duzinu prve katete a: ";
    cin >> prvaKateta;
    cout << "Unesite duzinu druge katete b: ";
    cin >> drugaKateta;
    obj2.setPravougliTrougao(prvaKateta, drugaKateta);
    obj2.getPravougliTrougao();

    cout << endl << "Opis prvog objekta:";
    cout << endl << "Obim trougla iznosi " << obj1.obim();
    cout << endl << "Povrsina trougla iznosi " << obj1.povrsina();
    cout << endl << "Duzina hipotenuze trougla iznosi " << obj1.hipotenuza() << endl;
    obj1.uglovi();

    cout << endl << endl << "Opis drugog objekta:";
    cout << endl << "Obim trougla iznosi " << obj2.obim();
    cout << endl << "Povrsina trougla iznosi " << obj2.povrsina();
    cout << endl << "Duzina hipotenuze trougla iznosi " << obj2.hipotenuza() << endl;
    obj2.uglovi();

    return 0;
}
