#include<stdio.h>
/* write a program to check 
whether a no. is divisible 
by 2 or not.*/
int main() {
    int a;
    printf("a:");
    scanf("%d", &a);
    printf("%d", a % 2 == 0);
    return 0;
}