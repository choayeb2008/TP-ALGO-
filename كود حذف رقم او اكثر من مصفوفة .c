#include <stdio.h>
int main () {
    int a,b,c,d=0,k=0,i,j,n=10,T[10],R[10];


    for (i=1; i<=n; i++) {

        printf("put T[%d]: ",i);
        scanf("%d",&T[i]);

    }
    printf("give the number");
    scanf("%d",&c);
    for (i=1; i<=10; i++) {
        if (c==T[i]) {
            k=k+1;
        }
        else {
            d=d+1;
            R[d]=T[i];
        }
    }
    if (k==0) {
        printf("your number is not hire");
    }
    else {
        i=0;
        while (i<d) {
            i=i+1;
            printf(" R[%d]=%d \n",i,R[i]);
        }
    }

}
