#include<stdio.h>

int main() {
    float a , b , c , d;
    printf("a =");
    scanf("%f", &a);
    printf("\nb =");
    scanf("%f", &b);
    printf("\nc =");
    scanf("%f", &c);
    d = a + b + c;
    printf("\nThe Average of a, b and c is %f",d/3);
    return 0;
}