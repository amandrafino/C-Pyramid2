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
void printGrid(int gridPattern) {
    for (int i = 0; i < gridPattern; i++) {
        for (int j = 0; j < gridPattern; j++) {
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

/* 
 * 1. In the 'getGridSize() function, you're getting the size of the 
 * grid from  the user and returning it as 'n'
 * 2. In the 'printGrid()' function, you use 'int gridPattern' as the
 * parameter to represent the size of the grid that you want to print.
 * 3. When you call 'printGrid(gridSize)' in the main function, you pass
 * the value obtained from 'getGridSize()' as the argument, which gets
 * assigned to 'gridPattern'.
 */

