#include <stdio.h>

#define MAXN 10

int ucitajDimenzijeKvadratneMatrice(void);
void spirala(int [][MAXN], int);
void ispisiElementeKvadratneMatrice(int [][MAXN], int);

int main(void)
{
    int n;
    int m[MAXN][MAXN];

    n = ucitajDimenzijeKvadratneMatrice();

    spirala(m, n);

    ispisiElementeKvadratneMatrice(m, n);

    return 0;
}

int ucitajDimenzijeKvadratneMatrice(void)
{
    int n;
    do{
        printf("\n\nUnesite dimenzije kvadratne matrice (maks = %d): ", MAXN);
        scanf("%d", &n);
    }while(n<1 || n>MAXN);
    return n;
}

void spirala(int matrica[][MAXN], int n)
{
    int p, i, brojac=0;

    for(p=0; p<n/2; p++)
    {
        for(i=p; i<n-1-p; i++)
            matrica[p][i] = ++brojac;
        for(i=p; i<n-1-p; i++)
            matrica[i][n-1-p] = ++brojac;
        for(i=n-1-p; i>p; i--)
            matrica[n-1-p][i] = ++brojac;
        for(i=n-1-p; i>p; i--)
            matrica[i][p] = ++brojac;
    }
    if(n%2)
        matrica[n/2][n/2] = ++brojac;
}

void ispisiElementeKvadratneMatrice(int matrica[][MAXN], int n)
{
    int i1, i2;
    for(i1=0; i1<n; i1++){
        for(i2=0; i2<n; i2++)
        {
            printf(" %8d", matrica[i1][i2]);
        }
        printf("\n");
    }

}
