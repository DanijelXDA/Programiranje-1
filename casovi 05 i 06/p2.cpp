#include <stdio.h>

int main(void)
{
    double *a, o;

    printf("\n\nUnesite vrednost stranice kvadrata: ");
    scanf("%lf", a);

    printf("\n\nUneli ste %lf\n\n", *a);

    o = 4. * (*a);

    printf("\n\nObim kvadrata iznosi %lf\n\n", o);

    return 0;
}
