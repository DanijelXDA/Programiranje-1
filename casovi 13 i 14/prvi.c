#include <stdio.h>

double obimkvadrata(double);

int main(void)
{
    double a, o;

    printf("\nUnesite stranicu kvadrata a = ");
    scanf("%lf", &a);

    o = obimkvadrata(a);

    printf("\n\nObim kvadrata iznosi %lf\n\n", o);

    return 0;
}

double obimkvadrata(double x)
{
    return 4.*x;
}

