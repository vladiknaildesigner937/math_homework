#include <stdio.h>

int main() {
    int i = 0;
    
    while (i <= 10) {
        printf("Hello World\n");
        
        if (i == 7) {
            break; // Exit loop after printing "Hello World"
        }
        
        ++i;
    }

    return 0;
}
