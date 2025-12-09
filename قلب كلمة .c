#include <stdio.h>

int main() {
  char texte[100];
  int i= 0;
     char c;

    printf("put your texte: ");

    while(i < 99 && (c = getchar()) != '\n' && c != EOF) {
        texte[i] = c;
          i++;
    }
      texte[i] = '\0';

    
    for(int j = 0; j < i; j++) {
        
    }
    printf("\n");

    printf("the cbange: ");
    for(int j=i - 1; j >= 0; j--)  
    {
        printf("%c", texte[j]);
      }
       printf("\n");

    return 0;
}