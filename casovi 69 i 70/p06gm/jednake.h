#ifndef JEDNAKE_H
#define JEDNAKE_H
#include "cmath"
class jendkeStranice
{
protected:
    double stranica;
public:
    virtual double getPovrsina() = 0;
    void setStranica(double s)
    {
        stranica = s;
    }

};
class jednakostranicniTrougao:public jendkeStranice
{
public:
    double getPovrsina(){
        return (stranica * stranica *sqrt(3.))/4;
    }
};
class kvadrat:public jendkeStranice{
public:
    double getPovrsina(){
        return stranica * stranica;
    }
};
class kocka:public jendkeStranice{
public:
    double getPovrsina(){
        return stranica * stranica * 6.;
    }
};
#endif // JEDNAKE_H
