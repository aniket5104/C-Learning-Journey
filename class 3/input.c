#include <stdio.h>
/* Q. write a program to calculate the
area of Square. Take input from the
user.*/
int main()
{
    int side;
    printf("side = ");
    scanf("%d", &side);
    printf("area of the square is %d", side * side);
    return 0;
}