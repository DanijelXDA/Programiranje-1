#include <stdio.h>
#define MAX 25
int main (void)
{
    int i,n,p;
    double a[MAX],b;
    do{
        printf("\nUnesite broj elemenata niza: ");
        scanf("%d", &n);
    }while(n<1 || n>MAX);
    for(i=0;i<n;i++){
        printf("\n a[%d]= ",i);
        scanf("%lf", &a[i]);
    }
    printf("\nKoji broj zelite da pronadjete u nizu ");
    scanf("%lf",&b);
    for(i=0;i<n;i++)
        if(a[i]==b){
        printf("\nTrazeni broj se nalazi u a[%d]",i);
        p=1;
        }
        if(p==0)
            printf("\nTrazeni broj se ne nalazi u nizu");
return 0;
}


