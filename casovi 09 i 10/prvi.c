#include <stdio.h>

int main(void)
{
    int a=5, b=10, *i;
    double x=1.0, y=2.0, *d;

    i = &a;
    printf("\nAdresa pokazivaca je %d", &i);    // probajte i konverziju %p
    printf("\nSadrzaj pokazivaca je %d", i);    // probajte i konverziju %p
    printf("\nPokazivac pokazuje na vrednost %d\n", *i);

    i = &b;
    printf("\nAdresa pokazivaca je %d", &i);    // probajte i konverziju %p
    printf("\nSadrzaj pokazivaca je %d", i);    // probajte i konverziju %p
    printf("\nPokazivac pokazuje na vrednost %d\n", *i);

    d = &x;
    printf("\nAdresa pokazivaca je %d", &d);    // probajte i konverziju %p
    printf("\nSadrzaj pokazivaca je %d", d);    // probajte i konverziju %p
    printf("\nPokazivac pokazuje na vrednost %lf\n", *d);

    d = &y;
    printf("\nAdresa pokazivaca je %d", &d);    // probajte i konverziju %p
    printf("\nSadrzaj pokazivaca je %d", d);    // probajte i konverziju %p
    printf("\nPokazivac pokazuje na vrednost %lf\n", *d);

    return 0;
}
