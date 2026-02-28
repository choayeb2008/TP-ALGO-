#include <stdio.h>

int main() {
    int a, b, d = 0, j, e;
    printf("give a: ");
    scanf("%d", &a);
    printf("give b: ");
    scanf("%d", &b);

    j = b;           
    while (j != 0) {
        e = j % 10;              
        d = d * 10 + e;   
        j = j / 10;       
    }

    if (a == d) {
        printf("They are inverse numbers.\n");
    } else {
        printf("They are not inverse numbers.\n");
    }

    return 0;
}