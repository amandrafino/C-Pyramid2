#include <stdio.h>

int main(void) {
    int n;
    // Get size of grid
    do {
        printf("Please enter a number (1 - 10): ");
        scanf("%d", &n);

    } while (n < 1 || n > 10); 

    // Print grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
