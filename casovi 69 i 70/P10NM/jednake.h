#ifndef JEDNAKE_H
#define JEDNAKE_H
#include "cmath"
class jednakeStranice {
protected:
    double stranica;
public:
    virtual double getPovrsina() = 0;
    void setStranica(double s)
    {
        stranica = s;

    }
};
class kvadrat:public jednakeStranice{
public:
    double getPovrsina(){
        return stranica * stranica;
    }
};
class jednakostranicniTrougao : public jednakeStranice{
public:
    double getPovrsina()
    {
     return (stranica * stranica * sqrt(3.))/4;
    }
};
class kocka:public jednakeStranice{
public:
    double getPovrsina(){
        return 6. * stranica * stranica;
    }
};

#endif // JEDNAKE_H
