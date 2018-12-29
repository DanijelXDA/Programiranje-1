/* PROGRAM KOJI UCITAVA DVA NIZA, PRVI NIZ SE SASTOJI OD 6 ELEMENATA, A DRUGI NIZ OD 2 ELEMENTA.
POZIV FUNKCIJE UMETNI() UBACUJE NIZ B NA 5-TI INDEX U NIZU A I PRIKAZUJE NIZ A SA UMETNUTIM NIZOM B */
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
    int a[10], b[2], i;

    // ucitavanje niza a
    printf("\nUnos niza a\n>> ");
    for(i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    // ucitavanje niza b
    printf("\n\nUnos niza b\n>> ");
    for(i = 0; i < 2; i++)
        scanf("%d", &b[i]);

    umetni(a, 6, b, 2, 5);

    printf("\n\n\nPrikaz niza A\n>> ");
    for(i = 0; i < 6 + 2; i++)
        printf("%d ", a[i]);


    printf("\n\n\n");

    return 0;
}
