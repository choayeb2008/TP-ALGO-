#include <stdio.h>
int main () {
    int a,b,c,d,k,i,j,n,T[50],R[50];
    printf("put n :  ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {

        printf("put T[%d]: ",i);
        scanf("%d",&T[i]);
    }
    for (j=1; j<=n-1; j++)
    {   for (i=1; i<=n-j; i++)
        {
            if (T[i]<T[i-1]) {
                c=T[i];
                T[i]=T[i-1];
                T[i-1]=c;
            }
        }


    }

    for (i=1; i<=n; i++) {
        printf("\n T[%d]=%d \n",i,T[i]);
    }
}