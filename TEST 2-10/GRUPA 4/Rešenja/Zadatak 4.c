/* PROGRAM PRIKAZUJE VREDNOST fibonaci(n) FIBONACIJEVOG NIZA POMOCU REKURZIVNE FUNKCIJE */
#include <stdio.h>

int fibonaci(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}

int main(void)
{
    int n;

    do {
        printf("\nUnesite jedan ceo broj: ");
        scanf("%d", &n);
    } while(n < 0);


    printf("\nFibonaci(%d) = %d", n, fibonaci(n));

    return 0;
}
