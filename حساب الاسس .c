#include <stdio.h>
int main (){
int a , b,i,c;
printf("put your number : ");
scanf("%d",&a);
printf("put the pawer : ");
scanf("%d",&b);
c=a;
for (i=1;i<b;i++)
{
c=a*c;


}
printf("%d^%d=%d",a,b,c);
}