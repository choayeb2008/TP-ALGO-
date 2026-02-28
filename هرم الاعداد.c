#include <stdio.h>
int main () {
    int a,b,j, i, n=7,k=4;
    int m[30][30];
    for (j=1; j<=n; j++) {
        for(i=j; i<=k; i++) {
            m[i][j]= 0;

        }
    }
    for (j=1; j<=n/2+1; j++)
    
     {
     a=1;
        for(i=k-j+1; i<=k; i++) {
            
            
                m[i][j]= a;
                
            a=a+1; 
        }

    }
    for (j=n/2+2; j<=n; j++)
    
     {
     a=1;
        for(i=j-k+1; i<=k; i++) {
            
            
                m[i][j]= a;
                
            a=a+1; 
        }

    }
for (i=1; i<=n; i++) {
        for(j=1; j<=k; j++) {
            printf("%d  ",m[j][i]);

        }printf("\n");
    }


}
