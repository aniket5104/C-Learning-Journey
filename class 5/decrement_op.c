#include<stdio.h>
// pre decrement operator: --i(first check then decrease)
// post decrease opertor: i--(first decrease then check)
int main() {
    int i= 10;
        printf("\n%d",i--);
        printf("\n%d", i);
    int j= 10;
        printf("\n%d",--j);
        printf("\n%d", j);
    return 0;
}