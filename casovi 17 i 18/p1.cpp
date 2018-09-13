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
    void setPravougliTrougao() // pomocu ove metode mozemo da
                               // izmenimo pocetne vrednosti promenljivih,
                               // a koje je postavio konstruktor
    {
        cout << endl << "Unesite duzinu prve katete a: ";
        cin >> a;
        cout << "Unesite duzinu druge katete b: ";
        cin >> b;
        return;
    }
    void getPravougliTrougao() //prikaz vrednosti objekta na ekranu
    {
        cout << endl << "Prva kateta  a = " << a << endl;
        cout << "Druga kateta b = " << b << endl << endl;
        return;
    }
    void obim() // izracunava i prikazuje obim pravouglog trougla
    {
        cout << endl << "Obim iznosi " << a + b + sqrt(a*a+b*b) << endl;
        return;
    }
    void povrsina() // izracunava i prikazuje povrsinu pravouglog trougla
    {
        cout << endl << "Povrsina iznosi " << 0.5 * a * b << endl;
        return;
    }
    void hipotenuza() // izracunava i prikazuje duzinu hipotenuze pravouglog trougla
    {
        cout << endl << "Hipotenuza iznosi " << sqrt(a*a+b*b) << endl;
        return;
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


int main()
{
    PravougliTrougao obj1(30,40), obj2;

    cout << "Stvorena su dva objekta:" << endl << endl;
    obj1.getPravougliTrougao();
    obj2.getPravougliTrougao();

    cout << endl << "Izmenite podatke za drugi objekat:" << endl << endl;
    obj2.setPravougliTrougao();
    obj2.getPravougliTrougao();

    cout << endl << "Opis prvog objekta:" << endl;
    obj1.obim();
    obj1.povrsina();
    obj1.hipotenuza();
    obj1.uglovi();

    cout << endl << endl << "Opis drugog objekta:" << endl;
    obj2.obim();
    obj2.povrsina();
    obj2.hipotenuza();
    obj2.uglovi();

    return 0;
}
