#include <stdio.h>

int main(void)
{
    double a;

    printf("\n\nUnesite vrednost stranice kvadrata: ");
    scanf("%lf", &a);

    double o = 4. * a;

    printf("\n\nObim kvadrata iznosi %lf\n\n", o);

    return 0;
}
