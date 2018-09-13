#include <stdio.h>

void ucitaj(double *, double *);
void ispisi(double, double);

int main(void)
{
    double a, b;

    ucitaj(&a, &b);

    ispisi(a, b);

    return 0;
}

void ucitaj(double *a, double *b)
{
    printf("\n\nUnesite vrednost prve stranice pravougaonika: ");
    scanf("%lf", a);

    printf("\n\nUnesite vrednost druge stranice pravougaonika: ");
    scanf("%lf", b);

    return;
}

void ispisi(double a, double b)
{
    printf("\n\nObim pravougaonika iznosi %lf", 2*a + 2*b);
    printf("\n\nPovrsina pravougaonika iznosi %lf\n\n", a*b);

    return;
}
