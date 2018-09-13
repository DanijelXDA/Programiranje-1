#include <iostream>

void obrada(int, int);
void obrada(float, float);
void obrada(double, double);
void obrada(long double, long double);

int main(void)
{
    int a1, b1;

    std::cout<<"Unesite jedan ceo broj: ";
    std::cin>>a1;

    std::cout<<"Unesite drugi ceo broj: ";
    std::cin>>b1;

    obrada(a1, b1);

    float a2, b2;

    std::cout<<std::endl<<"Unesite jedan realan broj (float): ";
    std::cin>>a2;

    std::cout<<"Unesite drugi broj (float): ";
    std::cin>>b2;

    obrada(a2, b2);

    double a3, b3;

    std::cout<<std::endl<<"Unesite jedan realan broj (double): ";
    std::cin>>a3;

    std::cout<<"Unesite drugi broj (double): ";
    std::cin>>b3;

    obrada(a3, b3);

    long double a4, b4;

    std::cout<<std::endl<<"Unesite jedan realan broj (long double): ";
    std::cin>>a4;

    std::cout<<"Unesite drugi broj (long double): ";
    std::cin>>b4;

    obrada(a4, b4);

    return 0;
}

void obrada(int x, int y)
{
    std::cout<<std::endl<<std::endl<<"Uneli ste cele brojeve!"<<std::endl<<x<<std::endl<<y<<std::endl;

    if(x>y)
        std::cout<<"Veci je prvi broj!"<<std::endl;
    else if(x<y)
        std::cout<<"Veci je drugi broj!"<<std::endl;
    else
        std::cout<<"Brojevi su jednaki!"<<std::endl;
    return;
}

void obrada(float x, float y)
{
    std::cout<<std::endl<<std::endl<<"Uneli ste realne brojeve jednostruke tacnosti!"<<std::endl<<x<<std::endl<<y<<std::endl;

    if(x>y)
        std::cout<<"Veci je prvi broj!"<<std::endl;
    else if(x<y)
        std::cout<<"Veci je drugi broj!"<<std::endl;
    else
        std::cout<<"Brojevi su jednaki!"<<std::endl;
    return;
}

void obrada(double x, double y)
{
    std::cout<<std::endl<<std::endl<<"Uneli ste realne brojeve dvostruke tacnosti!"<<std::endl<<x<<std::endl<<y<<std::endl;

    if(x>y)
        std::cout<<std::endl<<"Veci je prvi broj!"<<std::endl;
    else if(x<y)
        std::cout<<"Veci je drugi broj!"<<std::endl;
    else
        std::cout<<"Brojevi su jednaki!"<<std::endl;
    return;
}

void obrada(long double x, long double y)
{
    std::cout<<std::endl<<std::endl<<"Uneli ste realne brojeve prosirene tacnosti!"<<std::endl<<x<<std::endl<<y<<std::endl;

    if(x>y)
        std::cout<<"Veci je prvi broj!"<<std::endl;
    else if(x<y)
        std::cout<<"Veci je drugi broj!"<<std::endl;
    else
        std::cout<<"Brojevi su jednaki!"<<std::endl;
    return;
}
