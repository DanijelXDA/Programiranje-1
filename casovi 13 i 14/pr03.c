#include <stdio.h>

void obimtrougla(void);
void obimkvadrata(void);
void obimpravougaonika(void);

int main(void)
{
    int izbor;

    do{
        printf("\n\nSta zelite da izracunam?");
        printf("\n1 - Obim trougla");
        printf("\n2 - Obim kvadrata");
        printf("\n3 - Obim pravougaonika");
        printf("\n\nVas izbor je: ");
        scanf("%d", &izbor);
    }while(izbor<1||izbor>3);

    switch(izbor)
    {
        case 1: obimtrougla();break;
        case 2: obimkvadrata();break;
        case 3: obimpravougaonika();
    }

    return 0;
}

void obimtrougla(void)
{
    double a, b, c;

    printf("\nUnesite stranicu trougla a = ");
    scanf("%lf", &a);

    printf("\nUnesite stranicu trougla b = ");
    scanf("%lf", &b);

    printf("\nUnesite stranicu trougla c = ");
    scanf("%lf", &c);

    printf("\n\nObim trougla iznosi %lf\n\n", a+b+c);

    return;
}

void obimkvadrata(void)
{
    double a;

    printf("\nUnesite stranicu kvadrata a = ");
    scanf("%lf", &a);

    printf("\n\nObim kvadrata iznosi %lf\n\n", 4.*a);

    return;
}

void obimpravougaonika(void)
{
    double a, b;

    printf("\nUnesite stranicu pravougaonika a = ");
    scanf("%lf", &a);

    printf("\nUnesite stranicu pravougaonika b = ");
    scanf("%lf", &b);

    printf("\n\nObim pravougaonika iznosi %lf\n\n", 2*(a+b));

    return;
}
