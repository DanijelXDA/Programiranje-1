/* PROGRAM KOJI UCITAVA DVA NIZA, PRVI NIZ SE SASTOJI OD dimenzijaNizaA ELEMENATA, A DRUGI NIZ OD dimenzijaNizaB ELEMENATA.
POZIV FUNKCIJE UMETNI() UBACUJE NIZ B NA K-TI INDEX U NIZU A I PRIKAZUJE NIZ A SA UMETNUTIM NIZOM B */
#include <stdio.h>

void umetni(int nizA[], int *pm, const int nizB[], int n, int k)
{
    int i;

    for(i = *pm - 1; i >= k; i--)
        nizA[i + n] = nizA[i];

    for(i = 0; i < n; i++)
        nizA[k + i] = nizB[i];

    *pm += n;
}

int main(void)
{
    int a[100], b[50], dimenzijaNizaA, dimenzijaNizaB, k, i;

    do {
        printf("\nUnesite dimenziju niza A\n>> ");
        scanf("%d", &dimenzijaNizaA);
    } while(dimenzijaNizaA <= 0 || dimenzijaNizaA > 100);


    // ucitavanje niza a
    printf("\nUnos niza a\n>> ");
    for(i = 0; i < dimenzijaNizaA; i++)
        scanf("%d", &a[i]);

    do {
        printf("\n\n\nUnesite dimenziju niza B\n>>  ");
        scanf("%d", &dimenzijaNizaB);
    } while(dimenzijaNizaB <= 0 || dimenzijaNizaB > 50);


    // ucitavanje niza b
    printf("\n\nUnos niza b\n>> ");
    for(i = 0; i < dimenzijaNizaB; i++)
        scanf("%d", &b[i]);

    do {
        printf("\nNa koju poziciju ubacujete niz B?\n>> ");
        scanf("%d", &k);
    } while(k < 0 || k > dimenzijaNizaA); // index samo u opsegu!

    umetni(a, &dimenzijaNizaA, b, dimenzijaNizaB, k);

    printf("\n\n\nPrikaz niza A\n>> ");
    for(i = 0; i < dimenzijaNizaA; i++)
        printf("%d ", a[i]);


    printf("\n\n\n");

    return 0;
}
