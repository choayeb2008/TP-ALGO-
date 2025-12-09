#include <stdio.h>
int main () {
    int a, b,i;
    int c;
    char op;
    printf("Place the end of the process :  ");
    scanf("%d",&a);
    printf("Enter the operation code :");
    scanf(" %c",&op);
    printf("Place the second end of the process : ");
    scanf("%d",&b);

    if (op=='+')
    {
        c= a+b;
        
    }
    else if (op=='-')
    {
        c= a-b;
    }
    else if (op=='*')
    {
        c=a*b;
    }
    else if  (op=='/')
    {
        c=a/b;
    }
    else if (op=='^')
    {
        c=a;
        for (i=1; i<b; i++)
        {
           
            c=a*c;
            
    } 
    }
    else {
        printf("i cant do this now try agen");
    }

    printf("%d %c %d= %d",a,op,b,c);
}