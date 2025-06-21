#include<stdio.h>
void counter() {
    static int count = 0;  // Retains value after function exits
    count++;
    printf("Count: %d\n", count);
}
// Output: 1, 2, 3... on repeated calls