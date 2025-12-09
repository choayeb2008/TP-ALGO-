#include <stdio.h>
#include <math.h>
int main ()
{
 int a , b , c  ;
 float x1 , x2;
 double d ;
printf ("  الحدود    a*x^2+b*x+c\n حل معادلة من درجة ثانية ");
printf(" \nput the a : \n");
scanf("%d",&a);
printf("put b : ");
scanf("%d",&b);
printf("put c: " ); 
scanf("%d" , &c);
d = b*b-4*a*c;
if (d > 0)
{
double d1  = sqrt (d) ;
  x1 = (-b-d1)/(2*a);
  printf("x1 : %f", x1);
  x2 = (-b+d1)/(2*a);
  printf("x2:%f", x2);
}
else if (d==0)
{
x1=-b/(2*a); 
printf("x = %f",x1);
}
else 
{
printf("i can clu that");
}
return 0;
}





    