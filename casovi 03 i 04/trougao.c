#include <stdio.h>
#include <math.h>

typedef struct{
    double x, y;
}Tacka2D;

typedef struct{
    Tacka2D A, B;
}Duz;

typedef struct{
    Tacka2D A, B, C;
}Trougao;

int main(void)
{
    Trougao trougao;
    double obim;

    printf("\n\nUnesite x koordinatu tacke A ");
    scanf("%lf", &trougao.A.x);

    printf("\n\nUnesite y koordinatu tacke A ");
    scanf("%lf", &trougao.A.y);

    printf("\n\nUnesite x koordinatu tacke B ");
    scanf("%lf", &trougao.B.x);

    printf("\n\nUnesite y koordinatu tacke B ");
    scanf("%lf", &trougao.B.y);

    printf("\n\nUnesite x koordinatu tacke C ");
    scanf("%lf", &trougao.C.x);

    printf("\n\nUnesite y koordinatu tacke C ");
    scanf("%lf", &trougao.C.y);

    obim=sqrt(pow(trougao.B.x-trougao.A.x, 2)+pow(trougao.B.y-trougao.A.y,2));
    obim+=sqrt(pow(trougao.C.x-trougao.B.x, 2)+pow(trougao.C.y-trougao.B.y,2));
    obim+=sqrt(pow(trougao.A.x-trougao.C.x, 2)+pow(trougao.A.y-trougao.C.y,2));

    printf("\n\n\nDuzina duzi iznosi %lf\n\n", obim);

    return 0;
}
