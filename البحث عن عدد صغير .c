#include <stdio.h>
int main () {
int i,j, n,t[50];
printf("give n: ");scanf("%d",&n); 
j=1;
for (i=1;i<=n;i++){
printf("give t[%d]: ",i);scanf("%d",&t[i]);

}
for (i=2;i<=n;i++){
if(t[j]>=t[i]){
j=i; 
}
}
printf("t[%d]: %d", j,t[j]);
}