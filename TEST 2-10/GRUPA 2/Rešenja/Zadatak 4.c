/* PROGRAM RACUNA FAKTORIJEL BROJA n POMOCU REKURZIVNE FUNKCIJE */
#include <stdio.h>

int faktorijel(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * faktorijel(n - 1);
}

int main(void)
{
    int n;

    do {
        printf("\nUnesite jedan ceo broj\n>> ");
        scanf("%d", &n);
    } while(n < 0);

    printf("\nFaktorijel broja %d iznosi: %d\n", n, faktorijel(n));

    return 0;
}
