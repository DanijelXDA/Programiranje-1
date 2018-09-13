#include <stdio.h>
#include <math.h>

typedef struct{
    double x, y;
}Tacka2D;

typedef struct{
    Tacka2D A, B;
}Duz;

int main(void)
{
    Duz duz;
    double rastojanje;

    printf("\n\nUnesite x koordinatu tacke A ");
    scanf("%lf", &duz.A.x);

    printf("\n\nUnesite y koordinatu tacke A ");
    scanf("%lf", &duz.A.y);

    printf("\n\nUnesite x koordinatu tacke B ");
    scanf("%lf", &duz.B.x);

    printf("\n\nUnesite y koordinatu tacke B ");
    scanf("%lf", &duz.B.y);

    rastojanje=sqrt(pow(duz.B.x-duz.A.x, 2)+pow(duz.B.y-duz.A.y,2));

    printf("\n\n\nDuzina duzi iznosi %lf\n\n", rastojanje);

    return 0;
}
