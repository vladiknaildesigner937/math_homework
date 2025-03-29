#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    
    if (i > 0) {
        for (i = 1; i <= i; ++i) {
            printf("*");
        }
    } else {
        printf("Error, please enter a positive integer.");
    }

    return 0;
}
