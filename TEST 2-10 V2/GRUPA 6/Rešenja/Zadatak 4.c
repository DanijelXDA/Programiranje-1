/*
PROGRAM POMOCU REKURZIVNE FUNKCIJE IPSISUJE JEDAN CEO BROJ PO CIFRAMA S LEVA UDESNO
*/
#include <stdio.h>

void sLevaNaDesno(int x)
{
    if(x < 10)
        printf("%d ", x);
    else
    {
        sLevaNaDesno(x / 10);
        printf("%d ", x % 10);
    }
}

int main()
{
    int broj;

    printf("Unesite jedan ceo broj: ");
    scanf("%d", &broj);

    sLevaNaDesno(broj);

    return 0;
}
