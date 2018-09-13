# include <iostream>
using namespace std;

class AB //klasa
{
    private:
        int a;
        int b;

    public:
    AB(int A, int B) //ove parametre predajemo prilikom stvaranja objekta
                     //u funkciji main
    {
        a = A;//dodeljujemo nasim elementima vrednosti parametara
        b = B;
        cout << "Rad konstruktora, koji je dodelio parametre: " << endl;
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
        cout << "Ovde je radio destruktor" << endl;
    }
};

int main()
{
    AB obj1(100, 100);  //predaja parametara konstruktoru

    obj1.setAB();   //menjamo vrednosti parametara objekta
    obj1.getAB();   //i prikazujemo ih na ekran

    AB obj2(200, 200);  //predaja parametara konstruktoru
}

