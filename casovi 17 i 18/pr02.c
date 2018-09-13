#include <stdio.h>

#define MAX 50

int odredin(void);
double dzbir(double [], int);
double dmax(double [], int);
void dispisi(double [], int);

int main(void)
{
    int n, i;
    double a[MAX];

    n = odredin();

    for(i=0; i<n; i++){
        printf("\na[%d] = ", i);
        scanf("%lf", a+i);
    }

    printf("\n\nZbir svih elemenata u nizu iznosi %lf\n", dzbir(a, n));
    printf("\n\nNajveci element u nizu ima vrednost %lf\n", dmax(a, n));
    dispisi(a, n);

    return 0;
}

int odredin(void)
{
    int k;

    do{
        printf("\n\nUnesite broj elemenata u nizu (<%d): ", MAX);
        scanf("%d", &k);
    }while(k<1 || k>MAX);

    return k;
}

double dzbir(double a[], int n)
{
    int i;
    double s = 0;
    for(i=0; i<n; i++)
        s += a[i];

    return s;
}

double dmax(double a[], int n)
{
    int i;
    double mx = a[0];

    for(i=1; i<n; i++)
        if(a[i]>mx)
            mx = a[i];

    return mx;
}

void dispisi(double a[], int n)
{
    int i;

    for(i=0; i<n; i++)
        printf("\na[%2d] = %15.4lf", i, a[i]);

    printf("\n\n");

    return;
}
