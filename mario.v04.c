#include <stdio.h>

int main(void) {
    int n;
    printf("Please enter a number (1 - 10): ");
    scanf("%d", &n);

    while (n < 1 || n > 10) {
        printf("Invalid input! Please enter a number (1 - 10): ");
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
