/* PROGRAM RACUNA FAKTORIJEL BROJA 5 POMOCU REKURZIVNE FUNKCIJE */
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
    printf("\nFaktorijel broja 5 iznosi: %d\n", faktorijel(5));

    return 0;
}
