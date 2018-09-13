#include <iostream>
using namespace std;

class AB //klasa
{
    private:
        int a;
        int b;

    public:
    AB()    //Ovo je prvi konstruktor:
            //1) Konstruktor nema tip povratne vrednosti! U tom slucaju je void!!!
            //2) Ime mora biti isto kao i klase (u nasem slucaju AB)
    {
        a = 0;  // usvajamo podrazumevane vrednosti za promenljive
        b = 0;
        cout << "Rad konstruktora 1 prilikom stvaranja novog objekta: " << endl;
        //a zatim prikazujemo vrednosti na ekranu
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }
    AB(int A, int B) //Ovo je drugi konstruktor
                     //ove parametre predajemo prilikom stvaranja objekta
                     //u funkciji main
    {
        a = A;//dodeljujemo nasim elementima vrednosti parametara
        b = B;
        cout << "Rad konstruktora 2, koji je dodelio parametre: " << endl;
        //i prikazujemo ih na ekranu
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }

    void setAB()
    {
        cout << "Unesite ceo broj a: ";
        cin >> a;
        cout << "Unesite ceo broj b: ";
        cin >> b;
    }

    void getAB()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl << endl;
    }

    ~AB() // ovo je destruktor, necemo zaustavljati njegov rad,
          // samo da pokaze kada radi
    {
        cout << "Ovde je radio destruktor" << endl<<endl;
    }
};

int main()
{
    AB obj1, obj2(100, 150);

    cout << "Ulazimo u petlju" << endl;

    for(int i=1; i<= 5; i++){
        cout << i << endl;
        AB obj1(i, i);
    }

    cout << "Izasli smo iz petlje" << endl<<endl;

    AB obj3(222, 333);
}

