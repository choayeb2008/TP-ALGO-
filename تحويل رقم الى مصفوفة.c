#include <stdio.h>
int main (){
int a, b[10], i=0, n; 
printf("put n: ");scanf("%d",&n);
a=n; 

while(a>0){
i=1+i; 
b[i] = a%10;
a=a/10;

}
for (i;i>=1;i--)
printf("%d   ",b[i],n);

} 