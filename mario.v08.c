#include <stdio.h>

// Get grid size
int getGridSize() {
   int n;
   do {
       printf("Please enter a number (1 - 10): ");
       scanf("%d", &n);
       if (n < 1 || n > 10) {
           printf("Error! ");
       }
   } while (n < 1 || n > 10);

   return n;
}

// Print Grid Pattern
void printGridPattern(int gridPattern) {
    for (int i = 0; i < gridPattern; i++) {
        for (int j = 0; j < gridPattern; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    printGridPattern(getGridSize());
    return 0;
}
