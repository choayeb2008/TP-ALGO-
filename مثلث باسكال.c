#include <stdio.h>
int main () {
    int a,i, j, t[50][50], n=6;
   
   for (j=0; j<=n; j++) {
        for(i=0; i<=n; i++) {
        
        t[i][j]=0;
        }} 
   
   
    for (j=1; j<=n; j++) {
        for(i=1; i<=n; i++) {
          
                
           
            if( (i==j)|| (j==1)) {
                t[i][j]=1;
            }
            if (i>j)
            {
                a=t[i-1][j-1]+t[i-1][j];
                t[i][j]=a;

            }
            





        }

    }
    for (j=1; j<=n; j++) {
        for(i=1; i<=n; i++) {
            printf(" %d   ", t[i][j]);
        }
        printf("\n");
    }
}