/* Write a program to calculatethe 
perimeter of a rectangle. take sides
 a and b from the user*/
 #include<stdio.h>

 int main() {
    int a , b;
    printf("a= ");
    scanf("%d", &a);
    printf("b=");
    scanf("%d",&b);
    int c = a + b;
    printf("Area of REctangle is %d", 2 * c);
    return 0;
 }