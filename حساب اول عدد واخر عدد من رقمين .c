#include <stdio.h>
 int main (){
int a,b,c=0,d=0,j,i,e;
printf("give a:");scanf("%d",&a);
printf("give b:");scanf("%d",&b);
j=b;i=a;
while (j+i!=0){
j=j/10; 
i=i/10;

if ((j/10)==0){
d=j%10+(b%10);
j=0;
}
if ((i/10)==0){
c=i%10+(a%10);
i=0;
}}



printf(" %d %d",c,d);
}
