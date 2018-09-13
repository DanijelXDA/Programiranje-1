# include <iostream>
using namespace std;

class AB //klasa
{
    private:
        int a;
        int b;
    public:
    AB()    //Ovo je konstruktor:
            //1) Konstruktor nema tip povratne vrednosti! U tom slucaju je void!!!
            //2) Ime mora biti isto kao i klase (u nasem slucaju AB)
    {
        a = 0;  // usvajamo podrazumevane vrednosti za promenljive
        b = 0;
        cout << "Rad konstruktora prilikom stvaranja novog objekta: " << endl;
        //a zatim prikazujemo vrednosti na ekranu
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }

    void setAB() // pomocu ove metode mozemo da izmenimo pocetne vrednosti
                 // promenljivih, a koje je postavio konstruktor
    {
        cout << "Unesite ceo broj a: ";
        cin >> a;
        cout << "Unesite ceo broj b: ";
        cin >> b;
    }

    void getAB() //prikaz vrednosti objekta na ekranu
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }
};

int main()
{
    AB obj1;     //poziva se konstruktor (u trenutku kreiranja objekta)

    obj1.setAB();   //postavljanje novih vrednosti za objekat
    obj1.getAB();   //prikaz vrednosti objekta na ekran

    AB obj2;     //poziva se konstruktor (u trenutku kreiranja drugog objekta)
    return 0;
}
