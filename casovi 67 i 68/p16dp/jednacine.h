#ifndef JEDNACINE_H
#define JEDNACINE_H
#include "cmath"

class stranice{
protected:
    double stranica;
public:
    virtual double getPovrsina() = 0;
    virtual double getObim() = 0;
    void setStranica(double s)
    {
        stranica = s;
    }
    };
    class jednakostranicniTrougao:public stranice{
    public:
        double getPovrsina(){
            return (stranica*stranica*sqrt(3.))/4;
        }
        double getObim(){
            return 3. * stranica;
        }
    };
    class kvadrat:public stranice{
    public:
        double getPovrsina(){
            return stranica * stranica;
        }
        double getObim(){
            return stranica * 4.;
        }
    };
    class sestougao:public stranice{
    public:
        double getPovrsina(){
            return (6 * stranica * stranica * sqrt(3.))/4.;
        }
        double getObim(){
            return 6 * stranica;
        }
    };

#endif // JEDNACINE_H
