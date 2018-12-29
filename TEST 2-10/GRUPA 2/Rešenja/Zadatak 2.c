/* PROGRAM KOJI UCITAVA DVA NIZA, PRVI NIZ SE SASTOJI OD 10 ELEMENATA, A DRUGI NIZ OD 5 ELEMENATA.
POZIV FUNKCIJE UMETNI() UBACUJE NIZ B NA K-TI INDEX U NIZU A I PRIKAZUJE NIZ A SA UMETNUTIM NIZOM B */
#include <stdio.h>

void umetni(int nizA[], int pm, const int nizB[], int n, int k)
{
    int i;

    for(i = pm - 1; i >= k; i--)
        nizA[i + n] = nizA[i];

    for(i = 0; i < n; i++)
        nizA[k + i] = nizB[i];
}

int main(void)
{
    int a[50], b[10], i, k;

    // ucitavanje niza a
    printf("\nUnos niza a\n>> ");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    // ucitavanje niza b
    printf("\n\nUnos niza b\n>> ");
    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    do {
        printf("\nNa koju poziciju ubacujete niz B?\n>> ");
        scanf("%d", &k);
    } while(k < 0 || k > 10); // index samo u opsegu!

    umetni(a, 10, b, 5, k);

    printf("\n\n\nPrikaz niza A\n>> ");
    for(i = 0; i < 10 + 5; i++)
        printf("%d ", a[i]);


    printf("\n\n\n");

    return 0;
}
