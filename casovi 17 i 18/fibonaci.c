#include <stdio.h>

int fib(int);

int main(void)
{
    int n;

    do{
        printf("\n\nUnesite jedan ceo broj: ");
        scanf("%d", &n);
    }while(n<0);

    printf("\n\n\nVrednost elementa niza je %d\n\n", fib(n));

    return 0;
}

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
