/* PROGRAM PRIKAZUJE VREDNOST fibonaci(10) FIBONACIJEVOG NIZA POMOCU REKURZIVNE FUNKCIJE */
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
    printf("\nFibonaci(10) = %d", fibonaci(10));

    return 0;
}
