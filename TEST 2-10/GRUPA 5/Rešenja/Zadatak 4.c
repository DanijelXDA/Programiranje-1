/*
PROGRAM POMOCU REKURZIVNE FUNKCIJE RACUNA KOLIKO CIFARA IMA UNETI BROJ I VRACA BROJ CIFARA
*/
#include <stdio.h>

int cifre = 0;

int brojCifara(int broj)
{
    if(broj > 0)
    {
        cifre++;
        brojCifara(broj / 10);
    }

    return cifre;
}

int main()
{
    int broj;

    printf("Unesite jedan ceo broj: ");
    scanf("%d", &broj);

    printf("\nBroj cifara broja %d je: %d\n", broj, brojCifara(broj));

    return 0;
}
