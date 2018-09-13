#include <stdio.h>

int fakt(int);  /* Ovo je prototip funkcije */


/* Glavni program */
int main(void)
{
    int n;

    do{
        printf("\n\nUnesite jedan ceo broj (n>=0): ");
        scanf("%d", &n);
    }while(n<0);

    printf("\n\n%d! = %d\n\n", n, fakt(n));

    return 0;
}


/* Definicija (kod) funkcije */
int fakt(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fakt(n-1);
}
