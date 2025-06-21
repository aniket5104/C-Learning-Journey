#include <stdio.h>

int main() {
    int rows = 4; // Total number of rows
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        int count = 2 * i - 1; // Number of elements in this row

        // Print spacing for alignment (optional)
        for (int space = 0; space < rows - i; space++) {
            printf("  ");
        }

        // Print numbers in the row
        for (int j = 0; j < count; j++) {
            printf("%2d ", num++);
        }
        printf("\n");
    }

    return 0;
}
