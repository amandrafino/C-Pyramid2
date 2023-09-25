#include <stdio.h>

// Get size of grid
int getGridSize() {
    int n;
    do {
        printf("Please enter a number (1 - 10): ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    return n; // Returns  the value n, which is the  size of the grid
}

// Print Grid Pattern
void printGrid(int n) {
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
    printGrid(gridSize);
    return 0;
}
