#include <stdio.h>
int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        for (i = 1; i <= n; i += 2)
            printf("*");
        printf("\n");
    } else {
        for (i = 1; i <= n; i++)
            printf("*");
        printf("*\n");
    }
    
    return 0;
}
