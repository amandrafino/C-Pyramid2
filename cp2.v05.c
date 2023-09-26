#include <stdio.h>
#include <stdlib.h>

// Get size of grid
int getGridSize() {
    int n;
    do{ 
        printf("Enter a number [1 - 10]: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    return n; // Returns value of n (size of grid)
}

// Pring Grid Pattern
void printGridPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
}

// Call the functions
int main() {
    int gridSize = getGridSize();
    printGridPattern(gridSize);
    return 0;
}
