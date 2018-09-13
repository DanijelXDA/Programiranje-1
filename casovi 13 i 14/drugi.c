#include <stdio.h>

int zbir(int);

int main(void)
{
    int n;

    printf("\nUnesite pozitivan ceo broj n = ");
    scanf("%d", &n);

    printf("\n\nZbir kvadrata brojeva od 1 do %d iznosi %d\n\n", n, zbir(n));

    return 0;
}

int zbir(int x)
{
    int i, suma=0;

    for(i=1; i<=x; i++)
        suma += i*i;

    return suma;
}
